#include <iostream>

//prototypes
int menu();
void DoTaskOne();
void DoTaskMany();

using namespace std;

int main()
{
    int a;
    a = menu();
    cout<<a;
    return 0;
}


int menu()
{
    int choice;

    cout<<"***MENU***"<<endl<<endl;
    cout<<"(1) Choice one"<<endl;
    cout<<"(2) Choice two"<<endl;
    cout<<"(3) Choice three"<<endl;
    cout<<"(4) Redisplay menu"<<endl;
    cout<<"(5) Quit"<<endl;
    cout<<endl<<"Enter your choice: ";
    cin>> choice;
    return choice;
}

void DoTaskOne()
{
    cout<<"Task One"<<endl;
}

void DoTaskMany(int which)
{
    if (which == 2)
}
