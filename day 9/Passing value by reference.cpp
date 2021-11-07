#include<iostream>

using namespace std;

void swap(int &x,int &y);

int main()
{
    int x = 5, y = 10;
    cout<<"Main. Before swap, x: "<<x<<" y: "<<y<<endl;
    swap(x,y);
    cout<<"Main. After swap, x: "<<x<<" y: "<<y<<endl;
    return 0;
}

void swap(int &rx, int &ry)
{

    cout<<"Swap. Before swap, x: "<<rx<<" y: "<<ry<<endl;
    int t;
    t = rx;
    rx = ry;
    ry = t;
    cout<<"Swap. After swap, x: "<<rx<<" y: "<<ry<<endl;
}
