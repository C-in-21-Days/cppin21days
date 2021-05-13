#include<iostream>

using namespace std;

inline int Double(int);

int main()
{
    int target;
    
    cin>>target;
    
    target = Double(target);
    cout<<target<<endl;
    
    target = Double(target);
    cout<<target<<endl;
    
    target = Double(target);
    cout<<target<<endl;
    
    return 0;
    
}

int Double(int target) // there must be int infront of target
{
    return target*2;
}
