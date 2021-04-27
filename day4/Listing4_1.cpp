//increment and decrement

// Example program
#include <iostream>

using std::cout;
using std::endl;

int main()
{
    int myAge = 39;
    int yourAge = 39;
    
    cout<<"My age is: "<<myAge<<endl; //39
    cout<<"Your age is: "<<yourAge<<endl; //39
    
    cout<<"My age is: "<<myAge++<<endl;  //39
    cout<<"Your age is: "<<++yourAge<<endl; //40
    
    cout<<"One your passed..."<<endl;
    cout<<"My age is: "<<myAge++<<endl; //40
    cout<<"Your age is: "<<++yourAge<<endl; //41
    
    return 0;
}

