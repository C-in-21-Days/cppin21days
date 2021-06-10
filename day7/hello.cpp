#include<iostream>

int main()
{
    using namespace std;
    
    int hello = 0;
    cout<<"How many hellos?"<<endl;
    cin>>hello;
    
    while(hello>0)
    {
    cout<<"Hello"<<endl;
    hello--;
    }
    
    cout<<"Counter is output"<<hello<<endl;
    
    
    return 0;
}
