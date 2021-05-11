#include<iostream>

using namespace std;

float Convert(float);

int main()
{
    
    float TempFer, TempCel;
    
    cout<<"Enter the temperature in Farenheit: "<<endl;
    cin>>TempFer;
    
    TempCel = Convert(TempFer);
    cout<<"Here is the temperature in Celsius: "<<TempCel<<endl;
    
    return 0;
}

float Convert(float TempFer) // we can put a variable even if it is not declared
{
    
    float TempCel;
    TempCel = ((TempFer - 32)*5)/9;
    return TempCel;
}
