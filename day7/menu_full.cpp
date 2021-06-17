#include <iostream>

//prototypes
int menu();
void DoTaskOne();
void DoTaskMany(int);

using namespace std;

int main()
{
    bool exit=false;
    for(;;)
    {
        int choice = menu();
        switch(choice)
        {
            case(1):
                DoTaskOne();
                break;
            case(2):
                DoTaskMany(2);
                break;
            case(3):
                DoTaskMany(3);
                break;
            case(4):
                continue;
                break;
            case(5):
                exit=true;
                break;
            default:
                cout<<"Please select again!"<<endl;
                break;
        }
        
        if(exit == true)
        break;
    }
    
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
        cout<<"Task Two!"<<endl;
    else
        cout<<"Task Three!"<<endl;
}
