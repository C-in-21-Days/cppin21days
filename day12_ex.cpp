// Listing 12.1
//
// Created on 17.01 by Angie
//
// Simple Inheritance
/*
#include <iostream>
using namespace std;

enum BREED {GOLDE, CAIRN, DANDIE, SHETLAND, DOBERMAN, LAB};

class Mammal
{
public:
    //constructors
    Mammal();
    ~Mammal();
    
    //accessors
    int GetAge() const;
    void SetAge(int);
    int GetWeight() const;
    void SetWeight();
    
    //other methods
    void Speak() const;
    void Sleep() const;
    
protected:
    int itsAge;
    int itsWeight;
};

class Dog : public Mammal
{
public:
    
    //constructors
    Dog();
    ~Dog();
    
    //accessors
    BREED GetBreed() const;
    void SetBreed(BREED);
    
    //other methods
    void WagTail();
    void BegForFood();
    
protected:
    BREED itsBreed;
};
*/

// Listing 12.2
//
// Created on 17.01
//
// Using a derived object
/*
#include <iostream>
using namespace std;

enum BREED{GOLDEN, DOBERMAN, LAB};

class Mammal
{
public:
    //constructor
    Mammal():itsAge(2), itsWeight(5){}
    ~Mammal(){}
    
    //accessors
    int GetAge() const {return itsAge;}
    int GetWeight() const {return itsWeight;}
    void SetAge(int age) {itsAge = age;}
    void SetWeight(int weight) {itsWeight = weight;}
    
    //other methods
    void Speak() const {cout<<"Mammal sound"<<endl;}
    void Sleep() const {cout<<"shhh. I am sleeping"<<endl;}
    
protected:
    int itsAge;
    int itsWeight;
};

class Dog : public Mammal
{
public:
    //constructors
    Dog():itsBreed(GOLDEN){}
    ~Dog(){}
    
    //accessors
    BREED GetBreed() const {return itsBreed;}
    void SetBreed(BREED breed) {itsBreed = breed;}
    
    //other methods
    void WagTail() const {cout<<"Tail wagging..."<<endl;}
    void BegForFood() const {cout<<"Begging for food..."<<endl;}
    
private:
    BREED itsBreed;
};

int main()
{
    Dog Fido;
    Fido.Speak();
    Fido.WagTail();
    cout<<"Fido is "<<Fido.GetAge()<<" years old"<<endl;
    
    return 0;
}
*/

//Listing 12.3
//
//Created on 17.01 by Angie
//
// Constructors and destructors
/*
#include <iostream>
using namespace std;

enum BREED {GOLDEN, DOBERMAN, LAB};

class Mammal
{
protected:
    int itsAge, itsWeight;
    
public:
    //Constructors
    Mammal();
    ~Mammal();
    
    //Accessors
    int GetAge() const {return itsAge;}
    int GetWeight() const {return itsWeight;}
    void SetAge(int age) {itsAge = age;}
    void SetWeight(int weight) {itsWeight = weight;}
    
    //other methods
    void Speak() const {cout<<"Mammal sound"<<endl;}
    void Sleep() const {cout<<"shhh. I'm sleeping"<<endl;}
};

class Dog : public Mammal
{
private:
    BREED itsBreed;
    
public:
    
    //Constructors
    Dog();
    ~Dog();
    
    //Accessors
    BREED GetBreed() const {return itsBreed;}
    void SetBreed(BREED breed) {itsBreed = breed;}
    
    //other methods
    void WagTail() const {cout<<"Tail wagging..."<<endl;}
    void BegForFood() const {cout<<"Begging for food..."<<endl;}
};

Mammal::Mammal():
itsAge(3),
itsWeight(5)
{
    cout<<"Mammal constructor"<<endl;
}

Mammal::~Mammal()
{
    cout<<"Mammal destructor"<<endl;
}

Dog::Dog():
itsBreed(LAB)
{
    cout<<"Dog constructor"<<endl;
}

Dog::~Dog()
{
    cout<<"Dog destructor"<<endl;
}

int main()
{
    Dog Fido;
    Fido.Speak();
    Fido.WagTail();
    cout<<"Fido is "<<Fido.GetAge()<<" years old"<<endl;
    
    return 0;
}
*/

//Listing 12.5
//
//Created on 17.01 by Angie
//
// Overloading Constructors in derived classes
/*

#include <iostream>
using namespace std;

enum BREED {GOLDEN, DOBERMAN, LAB};

class Mammal
{
protected:
    int itsAge, itsWeight;
    
public:
    //Constructors
    Mammal() {cout<<"Mammal Constructor"<<endl;}
    ~Mammal() {cout<<"Mammal Destructor"<<endl;}
    
    //other methods
    void Speak() const {cout<<"Mammal sound"<<endl;}
    void Sleep() const {cout<<"shhh. I'm sleeping"<<endl;}
};

class Dog : public Mammal
{
private:
    BREED itsBreed;
    
public:
    
    //Constructors
    Dog() {cout<<"Dog Constructor"<<endl;}
    ~Dog(){cout<<"Dog Destructor"<<endl;}
    
    //other methods
    void WagTail() const {cout<<"Tail wagging..."<<endl;}
    void BegForFood() const {cout<<"Begging for food..."<<endl;}
    void Speak() const {cout<<"Woof!"<<endl;}
};

int main()
{
    Mammal bigAnimal;
    Dog Fido;
    bigAnimal.Speak();
    Fido.Speak();
    
    return 0;
}
*/


//Listing 12.6
//
//Created on 20.01 by Angie
//
// Hidding methods
/*

#include <iostream>
using namespace std;

class Mammal
{
protected:
    int itsAge, itsWeight;
    
public:
    void Move() const {cout<<"Mammal move one step"<<endl;}
    void Move(int distance) const
    {
        cout<<"Mammal move ";
        cout<<distance<<" steps"<<endl;
    }
};

class Dog : public Mammal
{
public:
    void Move() const {cout<<"Dog move 5 steps"<<endl;}
};

int main()
{
    Mammal bigAnimal;
    Dog Fido;
    
    bigAnimal.Move();
    bigAnimal.Move(2);
    Fido.Move();
    //Fido.Move(10);
    
    return 0;
}
*/

//Listing 12.7
//
//Created on 20.01 by Angie
//
// Calling a base method from a overridden method
/*
#include <iostream>
using namespace std;

class Mammal
{
protected:
    int itsAge, itsWeight;
    
public:
    void Move() const {cout<<"Mammal move one step"<<endl;}
    void Move(int distance) const
    {
        cout<<"Mammal move ";
        cout<<distance<<" steps"<<endl;
    }
};

class Dog : public Mammal
{
public:
    void Move() const;
};

void Dog::Move() const
{
    cout<<"In dog move..."<<endl;
    Mammal::Move(3);
}

int main()
{
    Mammal bigAnimal;
    Dog Fido;
    
    bigAnimal.Move(2);
    Fido.Mammal::Move(6);
    
    return 0;
}
*/

//Listing 12.8
//
//Created on 21.01 by Angie
//
// Using virtual methods
/*
#include <iostream>
using namespace std;

class Mammal
{
protected:
    int itsAge;
    
public:
    Mammal(): itsAge(1) {cout<<"Mammal Constructor"<<endl;}
    virtual ~Mammal() {cout<<"Mammal Destructor"<<endl;}
    void Move() const {cout<<"Mammal move one step"<<endl;}
    virtual void Speak() const {cout<<"Mammal speak"<<endl;}
};

class Dog : public Mammal
{
public:
    Dog() {cout<<"Dog Constructor"<<endl;}
    virtual ~Dog() {cout<<"Dog Destructor"<<endl;}
    void WagTail() {cout<<"Wagging Tail"<<endl;}
    void Speak() const {cout<<"Woof"<<endl;}
    void Move() const {cout<<"Dog movees 5 steps"<<endl;}
};

int main()
{
    Mammal *pDog = new Dog;
    pDog->Move();
    pDog->Speak();
    
    return 0;
}
*/

//Listing 12.9
//
//Created on 21.01 by Angie
//
// Multiple virtual functions called in turn
/*
#include <iostream>
using namespace std;

class Mammal
{
protected:
    int itsAge;
    
public:
    Mammal(): itsAge(1) {}
    virtual ~Mammal() {}
    virtual void Speak() const {cout<<"Mammal speak"<<endl;}
};

class Dog : public Mammal
{
public:
    void Speak() const {cout<<"Woof!"<<endl;}
};

class Cat : public Mammal
{
public:
    void Speak() const {cout<<"Meow!"<<endl;}
};

class Horse : public Mammal
{
public:
    void Speak() const {cout<<"Winnie!"<<endl;}
};

class Pig : public Mammal
{
public:
    void Speak() const {cout<<"Oink"<<endl;}
};


int main()
{
    Mammal *theArray[5];
    Mammal *ptr = nullptr;
    
    int choice, i;
    for(i = 0; i<5; i++)
    {
        cout<<"(1)Dog (2)Cat (3)Horse (4)Pig: ";
        cin>>choice;
        
        switch(choice)
        {
            case 1: ptr = new Dog;
                break;
            case 2: ptr = new Cat;
                break;
            case 3: ptr = new Horse;
                break;
            case 4: ptr = new Pig;
                break;
            default: ptr = new Mammal;
                break;
        }
        theArray[i] = ptr;
    }
    for(i=0; i<5; i++)
    {
        theArray[i]->Speak();
    }
    
    
    return 0;
}
*/

//Listing 12.10
//
//Created on 21.01 by Angie
//
// Data slicing with passing by value
/*
#include <iostream>
using namespace std;

class Mammal
{
protected:
    int itsAge;
public:
    Mammal():itsAge(1){}
    virtual ~Mammal() {}
    virtual void Speak() const {cout<<"Mammal speak"<<endl;}
};

class Dog : public Mammal
{
public:
    void Speak() const {cout<<"Woof!"<<endl;}
};

class Cat : public Mammal
{
public:
    void Speak() const {cout<<"Meow!"<<endl;}
};

void ValueFunc(Mammal);
void ptrFunc(Mammal*);
void refFunc(Mammal&);

int main()
{
    Mammal *ptr = 0;
    
    int choice;
    while(1)
    {
        bool fQuit = false;
        cout<<"(1) Dog  (2) Cat  (0) Quit: ";
        cin>>choice;
        switch (choice)
        {
            case 0:
                fQuit = true;
                break;
            case 1:
                ptr = new Dog;
                break;
            case 2:
                ptr = new Cat;
                break;
            default:
                ptr = new Mammal;
                break;
        }
        if(fQuit == true)
            break;
        
        ptrFunc(ptr);
        refFunc(*ptr);
        ValueFunc(*ptr);
    }
    return 0;
}

void ValueFunc(Mammal MammalValue)
{
    MammalValue.Speak();
}

void ptrFunc(Mammal *pMammal)
{
    pMammal->Speak();
}

void refFunc(Mammal &rMammal)
{
    rMammal.Speak();
}
*/

//Listing 12.11
//
//Created on 21.01 by Angie
//
//Virtual copy constructor

#include <iostream>
using namespace std;

class Mammal
{
protected:
    int itsAge;
public:
    Mammal():itsAge(1) {cout<<"Mammal constructor"<<endl;}
    virtual ~Mammal() {cout<<"Mammal destructor"<<endl;}
    Mammal (const Mammal &rhs);
    virtual void Speak() const {cout<<"Mammal speak"<<endl;}
    virtual Mammal *Clone() {return new Mammal(*this);}
    int GetAge() const {return itsAge;}
};

Mammal::Mammal(const Mammal &rhs):
itsAge(rhs.GetAge())
{cout<<"Mammal Copy Constructor"<<endl;}

class Dog : public Mammal
{
public:
    Dog() {cout<<"Dog constructor"<<endl;}
    virtual ~Dog() {cout<<"Dog destructor"<<endl;}
    Dog(const Dog &rhs);
    void Speak() const {cout<<"Woof!"<<endl;}
    virtual Mammal *Clone() {return new Dog(*this);}
};

Dog::Dog(const Dog &rhs):
Mammal(rhs)
{cout<<"Dog copy constructor"<<endl;}

class Cat : public Mammal
{
public:
    Cat() {cout<<"Cat constructor"<<endl;}
    virtual ~Cat() {cout<<"Cat destructor"<<endl;}
    Cat(const Cat &rhs);
    void Speak() const {cout<<"Meow!"<<endl;}
    virtual Mammal *Clone() {return new Cat(*this);}
};

Cat::Cat(const Cat &rhs):
Mammal(rhs)
{cout<<"Cat copy constructor"<<endl;}

enum ANIMALS {MAMMAL, DOG, CAT};
const int NumAnimalTypes = 3;

int main()
{
    Mammal *theArray[NumAnimalTypes];
    Mammal *ptr;
    
    int choice, i;
    
    for(i=0; i<NumAnimalTypes; i++)
    {
        cout<<"1. Dog   2.Cat   3.Mammal:";
        cin>>choice;
        switch (choice)
        {
            case DOG:
                ptr = new Dog;
                break;
            case CAT:
                ptr = new Cat;
                break;
            default:
                ptr = new Mammal;
                break;
        }
        theArray[i] = ptr;
    }
    Mammal *otherArray[NumAnimalTypes];
    for(i=0; i<NumAnimalTypes; i++)
    {
        theArray[i]->Speak();
        otherArray[i] = theArray[i]->Clone();
    }
    for(i=0; i<NumAnimalTypes; i++)
    {
        otherArray[i]->Speak();
    }
    return 0;
}
