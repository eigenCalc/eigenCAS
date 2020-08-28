#include <stack>
#include <vector>

class CASObject;

class Stack
{
    virtual void push(CASObject*) = 0;
    virtual CASObject* pop() = 0;
    virtual void drop() = 0;

    virtual CASObject* get() = 0;
    virtual CASObject* get(size_t) = 0;
};

class LocalStack: public Stack
{
    virtual void push(CASObject*) override;
    virtual CASObject* pop() override;
    virtual void drop() override;

    virtual CASObject* get() override;
    virtual CASObject* get(size_t) override;

    std::vector<CASObject*> data_;

};
