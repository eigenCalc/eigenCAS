#include <iostream>
#include <memory>
#include "stack.hpp"
#include "giac/gen.h"

int main(void)
{
    std::cout << "Test" << std::endl;
    Stack* stack = new LocalStack{};
    auto cas_obj = new gen{"x^2", stack->ct()};

    stack->push(cas_obj);

    std::cout << *(stack->get()) << std::endl;


}
