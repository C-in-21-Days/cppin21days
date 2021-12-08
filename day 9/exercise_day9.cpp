/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

class Cat
{
    public:
    Cat (int age) {itsAge = age;}
    ~Cat(){}
    
    int GetAge() const {return itsAge;}
    
    private:
    int itsAge;
};

Cat *MakeCat(int age);

int main()
{
    int age = 7;
    Cat *Boots = MakeCat(age);
    cout<<"Boot is "<<Boots->GetAge()<<" years old"<<endl;
    delete Boots;
    
    return 0;
}

Cat *MakeCat(int age)
{
    return new Cat(age);
}
