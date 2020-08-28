#include "stack.hpp"

void LocalStack::push(CASObject* obj)
{
   data_.push_back(obj);
}


CASObject* LocalStack::pop()
{
    CASObject* obj = data_.back();
    data_.pop_back();
    return obj;
}

void LocalStack::drop()
{
    data_.pop_back();
}

CASObject* LocalStack::get()
{
    return data_.back();
}

CASObject* LocalStack::get(size_t index)
{
    return data_[data_.size() - index];
}
