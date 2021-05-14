#include<iostream>

using namespace std;

int fib(int n);

int main()
{
    int a,sum;
    cin>>a;
    
    sum = fib(a);
    
    cout<<sum<<endl;
    return 0;
}

int fib(int n)
{
    int a,b;
    if(n<3)
    return 1;
    
    else
    {
       a = fib(n-1);
       b = fib(n-2);
       return a+b;
    }
}
