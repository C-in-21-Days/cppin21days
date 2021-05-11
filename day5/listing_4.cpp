#include <iostream>

using namespace std;

void myFunc(); // prototype

int x = 5, y = 7;

int main()
{
    cout<<"x from main: "<<x<<" y from main: "<<y<<endl; //5 and 7
    myFunc();
    cout<<"Back from myFunc"<<endl<<endl;
    
    cout<<"x from main: "<<x<<" y from main: "<<y<<endl; //5 and 7
    
    return 0;
}

void myFunc()
{
    int y = 10;
    
    cout<<"x from myFunc: "<<x<<" y from myFunc: "<<y<<endl; // 5 and 10
}
