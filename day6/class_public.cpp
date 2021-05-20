#include<iostream>

class Cat 
{
    public:
        int itsAge,itsWeight; //member variables
}; //note the semicolon


int main()
{
    Cat Frisky; //declaring an object
    Frisky.itsAge = 5;
    std::cout << "Frisky is a cat who is " <<Frisky.itsAge<< std::endl;
    
    return 0;
}
