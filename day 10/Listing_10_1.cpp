//Overloading class member functions

#include <iostream>

using namespace std;

class Rectangle //Rectangle class declaration
{
    public:
    Rectangle (int width, int height); //Constructor
    ~Rectangle(){} //Deconstructor
    
    //Overloaded class function DrawShape
    void DrawShape() const;
    void DrawShape (int aWidth, int aHeight) const;
    
    private:
    int itsWidth;
    int itsHeight;
};

//Constructor implementation
Rectangle::Rectangle(int width, int height)
{
    //access the private member of the class and assign the value of the member function
    itsWidth = width; 
    itsHeight = height;
}

//Overloaded DrawShape - takes no values
//Draws based on the current class member values
void Rectangle::DrawShape() const
{
    DrawShape(itsWidth, itsHeight);
}

//Overload DrawShape - takes two values
//Draws shapes based on the parameters
void Rectangle::DrawShape(int width, int height) const
{
    for (int i=0; i<height; i++)
    {
        for (int j=0; j<width; j++) cout<<"*";
        
        cout<<endl;
    }
}

int main()
{
    Rectangle theRect(30,5); //initialize a rectangle 30,5
    cout<<"DrawShape(): "<<endl;
    theRect.DrawShape();
    cout<<"\nDrawShape(40,2):"<<endl;
    theRect.DrawShape(40,2);

    return 0;
}

//the dunctions are overloaded and the first one calls the other one.
