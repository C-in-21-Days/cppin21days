//  A Demonstration of Putting Too Large a Value in an unsigned short Integer

#include <iostream>

int main()
{
   using std::cout;
   using  std::endl;
   
   unsigned short int a = 65535;
   
   a++;
   cout<<a<<endl; //0
   a++;
   cout<<a<<endl; //1
   a++;
   cout<<a<<endl; //2

    return 0;
}
