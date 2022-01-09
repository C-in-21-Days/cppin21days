//------------------ Listing 10.3 -----------------//

// Created on 09.01 by Angie

#include <iostream>
using namespace std;

class Rectangle
{
public:
    Rectangle();
    Rectangle(int width, int length);
    ~Rectangle(){}
    int GetWidth() const {return itsWidth;}
    int GetLength() const {return itsLength;}
private:
    int itsWidth;
    int itsLength;
};

Rectangle::Rectangle()
{
    itsWidth = 5;
    itsLength = 10;
}

Rectangle::Rectangle (int width, int length)
{
    itsWidth = width;
    itsLength = length;
}

int main()
{
    Rectangle Rect1;
    cout<<"Rect1 width: "<<Rect1.GetWidth()<<endl;
    cout<<"Rect1 length: "<<Rect1.GetLength()<<endl;
    
    int aWidth, aLength;
    cout<<"Enter a width:";
    cin>>aWidth;
    cout<<"Enter a length:";
    cin>>aLength;
    
    Rectangle Rect2(aWidth,aLength);
    
    cout<<"Rect2 width: "<<Rect2.GetWidth()<<endl;
    cout<<"Rect2 length: "<<Rect2.GetLength()<<endl;
    
    
    return 0;
}
