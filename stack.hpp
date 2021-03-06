#include <stack>
#include <vector>
#include "giac/gen.h"

using giac::gen; // gen is a generic giac cas object.
using giac::context;

class Stack
{
public:
    virtual void push(gen*) = 0;
    virtual gen* pop() = 0;
    virtual void drop() = 0;

    virtual gen* get() = 0;
    virtual gen* get(size_t) = 0;

    virtual context* ct();
};

class LocalStack: public Stack
{
public:
    virtual void push(gen*) override;
    virtual gen* pop() override;
    virtual void drop() override;

    virtual gen* get() override;
    virtual gen* get(size_t) override;

    virtual context* ct() override;

    std::vector<gen*> data_;
    context ct_;
};
