#include<iostream>

using namespace std;

class Cat 
{
  public:
  int GetAge();
  void SetAge(int age);
  void Meow();
  private:
  int itsAge;
};

int Cat::GetAge() //accessor method, which returns the private member of the classss
{
    return itsAge;
}

void Cat::SetAge(int age) //accessor method, which sets a value for itsAge
{
    itsAge = age;
}

void Cat::Meow()
{
    cout<<"Meow."<<endl;
}

int main()
{
    Cat Frisky;
    Frisky.SetAge(5);
    Frisky.Meow();
    cout<<Frisky.GetAge()<<endl;
    Frisky.Meow();
    
    return 0;
}
