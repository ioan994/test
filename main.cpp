#include <iostream>

struct bar
{
    void foo() { std::cout << "hi" << std::endl; }
};

template <class fooClass>
struct fooer
{
    void doFoo() {  fooClass().foo(); }
};

int main()
{
    fooer<bar>().doFoo();
}