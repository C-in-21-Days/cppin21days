//------------------ Listing 10.6 -----------------//
//
// Created on 09.01 by Angie
//
//Operator overloading

#include <iostream>
using namespace std;

class Counter
{
public:
    Counter();
    ~Counter(){};
    int GetItsVal() const {return itsVal;}
    void SetItsVal(int x) {itsVal = x;}
    // add increment member function Listin 10.7
    void Increment(){++itsVal;}
    
private:
    int itsVal;
};

Counter::Counter():
itsVal(0)
{}

int main()
{
    Counter i;
    cout<<"The value of i is "<<i.GetItsVal()<<endl;
    i.Increment();
    cout<<"Now it will be :"<<i.GetItsVal()<<endl;
    
    return 0;
}
