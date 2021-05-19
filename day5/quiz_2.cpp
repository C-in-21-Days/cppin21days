#include<iostream>

using namespace std;

typedef unsigned short USHORT;
typedef unsigned long ULONG;

ULONG GetPower(USHORT n, USHORT power);

int main()
{
    USHORT number, power;
    ULONG answser;
    cin>>number;
    cin>>power;
    
    answser = GetPower(number,power);
    cout<<answser<<endl;
    return 0;
    
}

ULONG GetPower(USHORT n, USHORT power)
{
    if(power == 1)
    return n;
    
    else
    return (n*GetPower(n,power-1));
}
