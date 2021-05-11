#include <iostream>

using namespace std;

void swap(int x, int y);

int main()
{
    int x=5, y=10;
    
    cout<<"Before swap x: "<<x<<" y: "<<y<<endl;
    swap(x,y);
    cout<<"After swap x: "<<x<<" y: "<<y<<endl;
    
    return 0;
}

void swap(int x, int y)
{
    int temp;
    
    cout<<"Swap! Before swap x: "<<x<<" y: "<<y<<endl;
    temp = x;
    x=y;
    y=temp;
    
    cout<<"Swap! After swap x: "<<x<<" y: "<<y<<endl;
}
