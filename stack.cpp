#include "stack.hpp"

void LocalStack::push(gen* obj)
{
   data_.push_back(obj);
}


gen* LocalStack::pop()
{
    gen* obj = data_.back();
    data_.pop_back();
    return obj;
}

void LocalStack::drop()
{
    data_.pop_back();
}

gen* LocalStack::get()
{
    return data_.back();
}

gen* LocalStack::get(size_t index)
{
    return data_[data_.size() - index];
}

context* LocalStack::ct()
{
    return &ct_;
}
