#include<iostream>

using namespace std;

class SimpleCat
{
public:
    SimpleCat();    //constructor
    SimpleCat(SimpleCat&);      //copy constructor
    ~SimpleCat();    //destructor

    int GetAge() const {return itsAge;}
    void SetAge(int age) {itsAge = age;}

private:
    int itsAge;
};

SimpleCat::SimpleCat()
{
    cout<<"Constructor"<<endl;
    itsAge = 1;
}
SimpleCat::SimpleCat(SimpleCat&) {cout<<"Copy Constructor"<<endl;}
SimpleCat::~SimpleCat() {cout<<"Destructor"<<endl;}

const SimpleCat * const FunctionTwo(const SimpleCat *const theCat);

int main()
{
    cout<<"Making a cat..."<<endl;
    SimpleCat Frisky;
    cout<<"Frisky is "<<Frisky.GetAge()<<" years old"<<endl;
    Frisky.SetAge(5);
    cout<<"Frisky is "<<Frisky.GetAge()<<" years old"<<endl;
    cout<<"Calling FunctionTwo..."<<endl;
    FunctionTwo(&Frisky);
    cout<<"Frisky is "<<Frisky.GetAge()<<" years old"<<endl;

}

const SimpleCat * const FunctionTwo(const SimpleCat *const theCat)
{
    cout<<"Function Two. Returning..."<<endl;
    cout<<"Frisky is now "<<theCat->GetAge()<<" years old"<<endl;
    return theCat;
}
