#include <stdexcept>
int add(int a, int b)
{
    return a+b;
}

int multi(int a, int b)
{
    return a*b;
}
int multi2(int a, int b)
{
    return a*b;
}

int dive(int a, int b)
{
    if(b == 0)
    {
        throw std::runtime_error("Can not divide by 0");
    }
    return a/b;
}