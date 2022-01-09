//------------------ Listing 10.5 -----------------//
//
// Created on 09.01 by Angie
//
//Copy Constructor

#include <iostream>
using namespace std;

class Cat
{
public:
    Cat();
    Cat(const Cat&);
    ~Cat();
    int GetAge() const {return *itsAge;}
    int GetWidth() const {return *itsWeight;}
    void SetAge(int age){*itsAge = age;}
    
private:
    int *itsAge;
    int *itsWeight;
};

Cat::Cat()
{
    itsAge = new int;
    itsWeight = new int;
    *itsAge = 5;
    *itsWeight = 9;
}

Cat::Cat(const Cat &rhs)
{
    itsAge = new int;
    itsWeight = new int;
    *itsAge = rhs.GetAge(); //public access
    *itsWeight = *(rhs.itsWeight); //private access
}

Cat::~Cat()
{
    delete itsAge;
    itsAge = 0;
    delete itsWeight;
    itsWeight = 0;
}

int main()
{
    Cat Frisky;
    cout<<"Frisky's age: "<<Frisky.GetAge()<<endl;
    cout<<"Setting Frisky to 6\n";
    Frisky.SetAge(6);
    cout<<"Creating boots for Frisky\n";
    Cat Boots(Frisky);
    cout<<"Frisky's age: "<<Frisky.GetAge()<<endl;
    cout<<"Boots age: "<<Boots.GetAge()<<endl;
    cout<<"setting Frisky to 7\n";
    Frisky.SetAge(7);
    cout<<"Frisky's age: "<<Frisky.GetAge()<<endl;
    cout<<"Boot's age: "<<Boots.GetAge()<<endl;
    return 0;
}
