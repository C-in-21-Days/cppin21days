#include<iostream>

using namespace std;

void swap(int *x,int *y);

int main()
{
    int x = 5, y = 10;
    cout<<"Main. Before swap, x: "<<x<<" y: "<<y<<endl;
    swap(&x,&y);
    cout<<"Main. After swap, x: "<<x<<" y: "<<y<<endl;
    return 0;
}

void swap(int *px, int *py)
{

    cout<<"Swap. Before swap, x: "<<*px<<" y: "<<*py<<endl;
    int t;
    t = *px;
    *px = *py;
    *py = t;
    cout<<"Swap. After swap, x: "<<*px<<" y: "<<*py<<endl;
}

//The purpose of this program is to swipe two values using pointers.
