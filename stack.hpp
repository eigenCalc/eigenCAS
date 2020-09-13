#include <stack>
#include <vector>
#include "giac/gen.h"

using giac::gen; // gen is a generic giac cas object.

class Stack
{
    virtual void push(gen*) = 0;
    virtual gen* pop() = 0;
    virtual void drop() = 0;

    virtual gen* get() = 0;
    virtual gen* get(size_t) = 0;
};

class LocalStack: public Stack
{
    virtual void push(gen*) override;
    virtual gen* pop() override;
    virtual void drop() override;

    virtual gen* get() override;
    virtual gen* get(size_t) override;

    std::vector<gen*> data_;

};
