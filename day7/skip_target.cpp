#include <iostream>

int main()
{
    using namespace std;
    
    unsigned short small;
    unsigned long large;
    unsigned long skip;
    unsigned long target;
    const unsigned short maxsmall=65535;
    
    cin<<small;
    cin<<large;
    cin<<skip;
    cin<<target;
    
    //setup 2 stop conditions for the loop
    while (small<large && small<maxsmall)
    {
        small++;
        
        if (small%skip == 0) //skip the decrement?
        {
            cout<<"skipping on "<<small<<endl;
            continue;
        }
        
        if(large == target) //exacy match for the target
        {
          cout<<"Target reached!"<<endl;
          break;
        }
      large-=2;
        
    }
  
  cout<<small<<".  "<<large<<endl;
  return 0;
}
