// A Demonstration of Adding Too Large a Number to a signed short Integer

#include <iostream>

int main()
{
   using std::cout;
   using std::endl;
   
    short int a = 32767; // if you change it to 32768, the first cout will show -32768
    
   cout<<a<<endl; //32767
   a++;
   cout<<a<<endl; //-32768
   a++;
   cout<<a<<endl; //-32767
   a++;
   cout<<a<<endl; //-32766

    return 0;
}
