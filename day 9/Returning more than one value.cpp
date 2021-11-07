#include<iostream>

using namespace std;

short Factor(int n, int* pSquared, int* pCubed);

int main()
{
    int number, squared, cubed;
    short error;

    cout<<"Enter a number (0-20): "<<endl;
    cin>>number;

    error = Factor(number, &squared, &cubed);
    if(!error)
    {
        cout << "Number: " << number << endl;
        cout << "Square: "<< squared << endl;
        cout << "Cubed: " << cubed << endl;
    }
    else cout<<"Error!"<<endl;

    return 0;
}

short Factor(int n, int *pSquared, int *pCubed)
{
    short Value = 0;
    if (n>-1&&n<21)
    {
        *pSquared = n*n;
        *pCubed = n*n*n;
        Value = 0;
    }
    else Value = 1;

    return Value;

}
