#include <iostream>

int func(unsigned short int, unsigned short int);

int main()
{
    int a;
    a=func(6,6);
    std::cout << a << std::endl;
    return 0;
}

int func (unsigned short int a, unsigned short int b)
{
    if (b==0)
    return -1;
    
    else
    return a/b;
}
