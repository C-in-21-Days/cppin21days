#include<iostream>

using namespace std;

enum ERR_CODE { SUCCESS, ERROR };
ERR_CODE Factor(int, int&, int&);

int main()
{
    cout<<ERROR<<endl;
    int number, squared, cubed;
    int result;

    cout<<"Enter a number (0-20): "<<endl;
    cin>>number;

    result = Factor(number, squared, cubed);
    if(result == SUCCESS)
    {
        cout << "Number: " << number << endl;
        cout << "Square: "<< squared << endl;
        cout << "Cubed: " << cubed << endl;
    }
    else cout<<"Error!"<<endl;

    return 0;
}

ERR_CODE Factor(int n, int &rSquared, int &rCubed)
{
    if (n>-1 && n<21)
    {
        rSquared = n*n;
        rCubed = n*n*n;
        return SUCCESS;
    }
    else
        return ERROR;
}
