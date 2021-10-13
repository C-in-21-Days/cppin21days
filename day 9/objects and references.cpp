#include <iostream>

class SimpleCat
{
public:
    SimpleCat(int age, int weight);
    ~SimpleCat() {}
    int GetAge() {return itsAge;}
    int GetWeight() {return itsWeight;}
private:
    int itsAge, itsWeight;
};

SimpleCat::SimpleCat(int age, int weight)
{
    itsAge = age;
    itsWeight = weight;
}

int main()
{
    SimpleCat Frisky(5,8);
    SimpleCat &rCatRef = Frisky;

    using namespace std;

    cout<<"Frisky is "<<rCatRef.GetAge()<<" years old"<<endl;
    cout<<"and Frisky's weight is "<<rCatRef.GetWeight()<<endl;

    return  0;
}
