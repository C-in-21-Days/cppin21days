//  Listing 10.2
//
//  Created by Angela on 6.01.22.

#include <iostream>

using namespace std;

//Rectangle class declaration
class Rectangle
{
public:
    //constructors
    Rectangle(int width, int height);
    ~Rectangle(){}
    void DrawShape (int aWidth, int aHeight, bool UseCurrentVals = false)const;
    
private:
    int itsWidth;
    int itsHeight;
};

//Constructor implementation
Rectangle::Rectangle(int width, int height):
itsWidth(width),    //initialization
itsHeight(height)
{}                  //empty body

//Default values used for third parameter
void Rectangle::DrawShape(int width, int height, bool UseCurrentValue)const
{
    int printWidth;
    int printHeight;
    
    if (UseCurrentValue == true)
    {
        //use current class values
        printWidth = itsWidth;
        printHeight = itsHeight;
    }
    else
    {
        //use parameter values
        printWidth = width;
        printHeight = height;
    }
    
    for (int i = 0; i<printHeight; i++)
    {
        for (int j = 0; j<printWidth; j++)
            cout<<"*";
        cout<<endl;
    }
}

//Driver program to demonstrate overloaded functions
int main()
{
    //initialize a rectangle to 30,5
    Rectangle theRect(30,5);
    cout<<"DrawShape(0,0,true)..."<<endl;
    theRect.DrawShape(0, 0, true);
    cout<<"DrawShape(40,2)..."<<endl;
    theRect.DrawShape(40, 2);
    return 0;
}
