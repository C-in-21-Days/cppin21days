// Listing 14.1
//
// Created by Angie on 25.01
//
// If horses could fly...
/*
#include <iostream>
using namespace std;

class Horse
{
public:
    void Gallop() const {cout<<"Galloping..."<<endl;}
    virtual void Fly() {cout<<"Horses cannot fly"<<endl;}
};

class Pegasus : public Horse
{
public:
    virtual void Fly(){cout<<"I can fly, I can fly, I can fly"<<endl;}
};

const int NumberOfHorses = 5;

int main()
{
    Horse *Ranch[NumberOfHorses];
    Horse *pHorse;
    
    int choice,i;
    
    for (i = 0; i<NumberOfHorses; i++) {
        cout<<"(1)Horse  (2)Pegasus:";
        cin>>choice;
        if(choice == 2)
            pHorse = new Pegasus;
        else
            pHorse = new Horse;
        Ranch[i] = pHorse;
        
        Ranch[i]->Fly();
        delete Ranch[i];
    }
    return 0;
}
*/

// Listing 14.2
//
// Created by Angie on 25.01
//
// dynamic_cast using rtti
/*
#include <iostream>
using namespace std;

enum TYPE {HORSE, PEGASUS};

class Horse
{
public:
    virtual void Gallop(){cout<<"Galloping..."<<endl;}
};

class Pegasus : public Horse
{
public:
    virtual void Fly(){cout<<"I can fly"<<endl;}
};

const int NumberHorses = 5;

int main()
{
    Horse *Ranch[NumberHorses];
    Horse *pHorse;
    
    int choice, i;
    for (i = 0; i<NumberHorses; i++)
    {
        cout<<"(1)Horse  (2)Pegasus:";
        cin>>choice;
        if(choice == 2)
            pHorse = new Pegasus;
        else
            pHorse = new Horse;
        Ranch[i] = pHorse;
    }
    cout<<endl;
    for (i=0; i<NumberHorses; i++) {
        Pegasus *pPeg = dynamic_cast<Pegasus*>(Ranch[i]);
        if (pPeg != NULL)
            pPeg->Fly();
        else
            cout<<"Just a horse"<<endl;
        
        delete Ranch[i];
    }
    
    return 0;
}
*/

// Listing 14.3
//
// Created by Angie on 25.01
//
// Multiple inheritance
/*
#include <iostream>
using namespace std;

class Horse
{
public:
    Horse(){cout<<"Horse constructor..."<<endl;}
    virtual ~Horse() {cout<<"Horse destructor"<<endl;}
    virtual void Whinny() const {cout<<"Whinny!"<<endl;}
};

class Bird
{
public:
    Bird(){cout<<"Bird constructor..."<<endl;}
    virtual ~Bird(){cout<<"Bird destrucotr"<<endl;}
    virtual void Chirp(){cout<<"Chirp"<<endl;}
    virtual void Fly(){cout<<"I can fly"<<endl;}
};

class Pegasus : public Horse,public Bird
{
public:
    void Chirp() const {cout<<"Whinny!"<<endl;}
    Pegasus(){cout<<"Pegasus constructor..."<<endl;}
    ~Pegasus(){cout<<"Pegasus destrucotr"<<endl;}
};

const int MagicNumber = 2;
int main()
{
    Horse *Ranch[MagicNumber];
    Horse *pHorse;
    
    Bird *Aviary[MagicNumber];
    Bird *pBird;
    
    int choice, i;
    
    for (i = 0; i<MagicNumber; i++)
    {
        cout<<"(1)Horse  (2)Pegasus:";
        cin>>choice;
        if(choice == 2)
            pHorse = new Pegasus;
        else
            pHorse = new Horse;
        Ranch[i] = pHorse;
    }
    for (i=0; i<MagicNumber; i++)
    {
        cout<<"(1)Horse  (2)Pegasus:";
        cin>>choice;
        if(choice == 2)
            pBird = new Pegasus;
        else
            pBird = new Bird;
        Aviary[i] = pBird;
    }
    
    cout<<endl;
    for (i=0; i<MagicNumber; i++)
    {
        cout<<"Ranch["<<i<<"]: "<<endl;
        Ranch[i]->Whinny();
        delete Ranch[i];
    }
    
    for (i=0; i<MagicNumber; i++)
    {
        cout<<"Aviary["<<i<<"]: "<<endl;
        Aviary[i]->Chirp();
        Aviary[i]->Fly();
        delete Aviary[i];
    }
    return 0;
}
*/

// Listing 14.4
//
// Created by Angie on 26.01
//
// Calling multiple constructors
/*
#include <iostream>
using namespace std;

typedef int Hands;
enum COLOR {Red, Green, Blue, Yellow, White, Black, Brow};

class Horse
{
public:
    Horse(COLOR color, Hands height);
    virtual ~Horse(){cout<<"Horse destructor"<<endl;}
    virtual void Whinny() const {cout<<"Whinny"<<endl;}
    virtual Hands GetHeigh() const {return itsHeigh;}
    virtual COLOR GetColor() const {return itsColor;}
private:
    Hands itsHeigh;
    COLOR itsColor;
};

Horse::Horse(COLOR color, Hands heigh):
itsColor(color), itsHeigh(heigh)
{cout<<"Horse constructor"<<endl;}

class Bird
{
public:
    Bird(COLOR color, bool migrates);
    virtual ~Bird() {cout<<"Bird destructor"<<endl;}
    virtual void Chrip() const {cout<<"Chrip"<<endl;}
    virtual void Fly() const {cout<<"Fly"<<endl;}
    virtual COLOR GetColor() const {return itsColor;}
    virtual bool GetMigration() const {return itsMigration;}
private:
    COLOR itsColor;
    bool itsMigration;
};

Bird::Bird(COLOR color, bool migrates):
itsColor(color), itsMigration(migrates)
{cout<<"Bird constructor"<<endl;}

class Pegasus : public Horse,public Bird
{
public:
    void Chrip() const {Whinny();}
    Pegasus(COLOR, Hands, bool, long);
    ~Pegasus() {cout<<"Pegasus destructor"<<endl;}
    virtual long GetNumberBelivers() const {return itsNumberBelievers;}
private:
    long itsNumberBelievers;
};

Pegasus::Pegasus(
                 COLOR aColor,
                 Hands heigh,
                 bool migrates,
                 long NumBelieve):
                 Horse(aColor, heigh),
                 Bird(aColor, migrates),
                 itsNumberBelievers(NumBelieve)
{cout<<"Pegasus constructor"<<endl;}

int main()
{
    Pegasus *pPeg = new Pegasus(Red, 5, true, 10);
    pPeg->Fly();
    pPeg->Whinny();
    
    cout<<"Your Pegasus is "<<pPeg->GetHeigh();
    cout<<" hands tall and ";
    if(pPeg->GetMigration())
        cout<<" it does migrate.";
    else
        cout<<" it does NOT migrate";
    
    cout<<endl;
    cout<<"A total of "<<pPeg->GetNumberBelivers();
    cout<<" people believe it exists."<<endl;
    
    delete pPeg;
    
    return 0;
}
*/

//Listing 14.5
//-------- Common base classes --------//
/*
#include <iostream>
using namespace std;

typedef int Hands;
enum COLOR {Red, Green, Blue, Yellow, White, Black, Brow};

class Animal   //common base to both bird and horse
{
private:
    int itsAge;
public:
    Animal(int);
    virtual ~Animal(){cout<<"Animal's destructor"<<endl;}
    virtual int GetAge() const {return itsAge;}
    virtual void SetAge(int age) {itsAge = age;}
};

Animal::Animal(int age):
itsAge(age)
{cout<<"Animal's CONSTRUCTOR"<<endl;}

class Horse : public Animal
{
protected:
    Hands itsHeight;
    COLOR itsColor;
public:
    Horse(COLOR, Hands, int);
    virtual ~Horse() {cout<<"Horse's destructor"<<endl;}
    virtual void Whinny() const {cout<<"Whinny!"<<endl;}
    virtual Hands GetHeight() const {return itsHeight;}
    virtual COLOR GetColor() const {return itsColor;}
};

Horse::Horse(COLOR color, Hands height, int age):
Animal(age),
itsColor(color),
itsHeight(height)
{cout<<"Horse CONSTRUCTOR"<<endl;}

class Bird : public Animal
{
protected:
    COLOR itsColor;
    bool itsMigration;
public:
    Bird(COLOR, bool, int);
    virtual ~Bird() {cout<<"Bird's destructor"<<endl;}
    virtual void Chirp() const {cout<<"Chirp!"<<endl;}
    virtual void Fly() const {cout<<"I can fly!"<<endl;}
    virtual COLOR GetColor() const {return itsColor;}
    virtual bool GetMigration() const {return itsMigration;}
};

Bird::Bird(COLOR color, bool migrates, int age):
Animal(age),
itsColor(color),
itsMigration(migrates)
{cout<<"Bird's CONSTRUCTOR"<<endl;}

class Pegasus : public Horse,public Bird
{
private:
    long itsNumberBel;
public:
    Pegasus(COLOR, Hands, bool, long, int);
    void Chirp() const {Whinny();}
    
    virtual ~Pegasus() {cout<<"Pegasus destructor"<<endl;}
    virtual long GetNumberBel() const {return itsNumberBel;}
    virtual COLOR GetColor() const {return Horse::itsColor;}
    virtual int GetAge() const {return Horse::GetAge();}
};

Pegasus::Pegasus(
                 COLOR aColor,
                 Hands height,
                 bool migrates,
                 long NumBel,
                 int age):
Horse(aColor, height, age),
Bird(aColor, migrates, age),
itsNumberBel(NumBel)
{cout<<"Pegasus CONSTRUCTOR"<<endl;}

int main()
{
    Pegasus *pPeg = new Pegasus(Red, 5, true, 10,4);
    int age = pPeg->GetAge();
    
    cout<<"This Pegaus is "<<age<<" years old"<<endl;
    
    delete pPeg;
    
    return 0;
}
*/

//Listing 14.6
//-------- Virtual inheritance --------//
/*
#include <iostream>
using namespace std;

typedef int Hands;
enum COLOR {Red, Green, Blue, Yellow, White, Black};

class Animal   //common base to both bird and horse
{
private:
    int itsAge;
public:
    Animal(int);
    virtual ~Animal(){cout<<"Animal's destructor"<<endl;}
    virtual int GetAge() const {return itsAge;}
    virtual void SetAge(int age) {itsAge = age;}
};

Animal::Animal(int age):
itsAge(age)
{cout<<"Animal's CONSTRUCTOR"<<endl;}

class Horse : virtual public Animal //adding virtual
{
protected:
    Hands itsHeight;
    COLOR itsColor;
public:
    Horse(COLOR, Hands, int);
    virtual ~Horse() {cout<<"Horse's destructor"<<endl;}
    virtual void Whinny() const {cout<<"Whinny!"<<endl;}
    virtual Hands GetHeight() const {return itsHeight;}
    virtual COLOR GetColor() const {return itsColor;}
};

Horse::Horse(COLOR color, Hands height, int age):
Animal(age),
itsColor(color),
itsHeight(height)
{cout<<"Horse CONSTRUCTOR"<<endl;}

class Bird : virtual public Animal //adding virtual
{
protected:
    COLOR itsColor;
    bool itsMigration;
public:
    Bird(COLOR, bool, int);
    virtual ~Bird() {cout<<"Bird's destructor"<<endl;}
    virtual void Chirp() const {cout<<"Chirp!"<<endl;}
    virtual void Fly() const {cout<<"I can fly!"<<endl;}
    virtual COLOR GetColor() const {return itsColor;}
    virtual bool GetMigration() const {return itsMigration;}
};

Bird::Bird(COLOR color, bool migrates, int age):
Animal(age),
itsColor(color),
itsMigration(migrates)
{cout<<"Bird's CONSTRUCTOR"<<endl;}

class Pegasus : public Horse,public Bird
{
private:
    long itsNumberBel;
public:
    Pegasus(COLOR, Hands, bool, long, int);
    void Chirp() const {Whinny();}
    
    virtual ~Pegasus() {cout<<"Pegasus destructor"<<endl;}
    virtual long GetNumberBel() const {return itsNumberBel;}
    virtual COLOR GetColor() const {return Horse::itsColor;}
    virtual int GetAge() const {return Horse::GetAge();}
};

Pegasus::Pegasus(
                 COLOR aColor,
                 Hands height,
                 bool migrates,
                 long NumBel,
                 int age):
Horse(aColor, height, age),
Bird(aColor, migrates, age),
Animal(age*2),
itsNumberBel(NumBel)
{cout<<"Pegasus CONSTRUCTOR"<<endl;}

int main()
{
    Pegasus *pPeg = new Pegasus(Red, 5, true, 10,2);
    int age = pPeg->GetAge();
    
    cout<<"This Pegaus is "<<age<<" years old"<<endl;
    
    delete pPeg;
    
    return 0;
}
*/

//Listing 14.7
//------ Shape classes -------//

#include <iostream>
using namespace std;

class Shape
{
public:
    Shape(){}
    virtual ~Shape(){}
    virtual long GetArea() = 0;
    virtual long GetPerim() = 0;
    virtual void Draw() = 0;
private:
};

void Shape::Draw() {cout<<"Abstract drawing mechanism!"<<endl;}

class Circle : public Shape
{
private:
    int itsRadius, itsCircumference;
public:
    Circle(int radius):itsRadius(radius){}
    ~Circle(){}
    long GetArea() {return 3.14*itsRadius*itsRadius;}
    long GetPerim() {return 2*3.14*itsRadius;}
    void Draw();
};

void Circle::Draw()
{cout<<"Circle drawing routine here!"<<endl;}

class Rectangle : public Shape
{
private:
    int itsWidth, itsLength;
public:
    Rectangle(int len, int width):
    itsLength(len),
    itsWidth(width){}
    
    virtual ~Rectangle(){}
    virtual long GetArea(){return itsLength*itsWidth;}
    virtual long GetPerim(){return 2*itsLength + 2*itsWidth;}
    virtual int GetLength(){return itsLength;}
    virtual int GetWidth(){return itsWidth;}
    virtual void Draw();
};

void Rectangle::Draw()
{
    for (int i = 0; i<itsLength; i++)
    {
        for(int j = 0; j<itsWidth; j++)
            cout<<"x ";
        
        
        cout<<endl;
    }
}

class Square : public Rectangle
{
public:
    Square(int len);
    Square(int len, int width);
    ~Square(){}
    long GetPerim() {return 4*GetLength();}
};


Square::Square(int len):
Rectangle(len, len)
{}

Square::Square(int len, int width):
Rectangle(len, width)
{
    if(GetLength() != GetWidth())
        cout<<"Error, not a square... a Rectangle??"<<endl;
}

int main()
{
    int choice;
    bool fQuit = false;
    Shape *sp;
    
    while (!fQuit)
    {
        cout<<"(1)Circle (2)Rectangle (3)Square (0)Quit: ";
        cin>>choice;
        
        switch (choice)
        {
            case 0:
                fQuit = true;
                break;
                
            case 1:
                sp = new Circle(5);
                break;
                
            case 2:
                sp = new Rectangle(4,6);
                break;
                
            case 3:
                sp = new Square(5);
                break;
                
            default:
                cout<<"Please enter a number between 0 and 3"<<endl;
                continue;
                break;
        }
        
        if (!fQuit)
            sp->Draw();
        
        delete sp;
        
        sp=0;
        cout<<endl;
    }
    return 0;
}

