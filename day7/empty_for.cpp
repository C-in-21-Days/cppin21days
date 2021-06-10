#include<iostream>

int main()
{
    using namespace std;
    
    int counter = 0;
    int max;
    cout<<"how many hellows?"<<endl;
    cin>>max;
    for(;;)
    {
        if (counter<max)
        {
            cout<<"hello"<<endl;
            counter++;
        }
        else
            break;
    }
    
    return 0;
}
