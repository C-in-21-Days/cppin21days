// A Demonstration of Adding Too Large a Number to a signed short Integer

#include <iostream>

int main()
{
   using std::cout;
   using std::endl;
   
    short int a = 32767;
    
   cout<<a<<endl;
   a++;
   cout<<a<<endl;
   a++;
   cout<<a<<endl;
   a++;
   cout<<a<<endl;

    return 0;
}
