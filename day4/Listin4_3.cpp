// A demo of the conditional operator

#include<iostream>

int main()
{
    using namespace std;
    
    int x,y,z;
    cin>>x>>y;
    
    z = (x>y)?x:y;
    
    cout<<z<<endl;
    
    return 0;
}
