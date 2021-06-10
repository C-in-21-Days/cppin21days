#include<iostream>

int main()
{
    using namespace std;
    
    int hello = 0;
    cout<<"How many hellos?"<<endl;
    cin>>hello;
    
    do
    {
        cout<<"Hello"<<endl;
        hello--;
    } while (hello > 0);
    
    cout<<"Counter is output"<<hello<<endl;
    
    
    return 0;
}
