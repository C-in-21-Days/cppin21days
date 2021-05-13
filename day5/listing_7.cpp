#include<iostream>

using namespace std;

int Double(int);
long Double(long);
float Double(float);
double Double(double);

int main()
{
    int myInt = 6500;
    long myLong = 65000;
    float myFloat = 6.5F;
    double myDouble = 6.5e20;
    
    int doubleInt, doubleLong, doubleFloat, doubleDouble;
    
    doubleInt = Double(myInt);
    doubleLong = Double(myLong);
    doubleFloat = Double(myFloat);
    doubleDouble = Double(myDouble);
    
    cout<<doubleInt<<endl;
    cout<<doubleLong<<endl;
    cout<<doubleFloat<<endl;
    cout<<doubleDouble<<endl;

    return 0;
}

int Double(int original)
{
    return original*2;
}
long Double(long original)
{
    return original*2;
}
float Double(float original)
{
    return original*2;
}
double Double(double original)
{
    return original*2;
}
