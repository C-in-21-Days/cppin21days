/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    unsigned short small;
    unsigned long large;
    const unsigned short maxsmall = 65535;
    
    cin>>small;
    cin>>large;
    
    while (small<large && small < maxsmall)
    {
        if (small%5000 == 0) 
        cout<<" . ";
        
        small++;
        large-=2;
    }
    
    cout<<small<<"   "<<large<<endl;

    return 0;
}
