#include<iostream>
//.hpp header
class Point //holds x,y coordinates
{
  //no construcotr - use default
  public:
    void SetX(int x){itsX = x;}
    void SetY(int y){itsY = y;}
    
    int GetX() const {return itsX;}
    int GetY() const {return itsY;}
    
    private:
    int itsX,itsY;
};


class Rectangle
{
  public:
  Rectangle(int top, int left, int right, int bottom);
  ~Rectangle(){}
  
  int GetTop() const {return itsTop;}
  int GetLeft() const {return itsLeft;}
  int GetRight() const {return itsRight;}
  int GetBottom() const {return itsBottom;}
  
  Point GetUpperLeft() const {return itsUpperLeft;}
  Point GetLowerLeft() const {return itsLowerLeft;}
  Point GetUpperRight() const {return itsUpperRight;}
  Point GetLowerRight() const {return itsLowerRight;}
  
  void SetUpperLeft(Point Location) {itsUpperLeft = Location;}
  void SetLowerLeft(Point Location) {itsLowerLeft = Location;}
  void SetUpperRight(Point Location) {itsUpperRight = Location;}
  void SetLowerRight(Point Location) {itsLowerRight = Location;}
  
  void SetTop(int top) {itsTop = top;}
  void SetLeft(int left) {itsLeft = left;}
  void SetRight(int right) {itsRight = right;}
  void SetBottom(int bottom) {itsBottom = bottom;}
  
  int GetArea() const;
  
  private:
  Point itsUpperLeft;
  Point itsUpperRight;
  Point itsLowerLeft;
  Point itsLowerRight;
  
  int itsTop;
  int itsLeft;
  int itsBottom;
  int itsRight;
   
}; //end rectangle.hpp

//rect.cpp
//#include "rectangle.hpp"

Rectangle::Rectangle(int top, int left, int right, int bottom) //accessor method
{
  itsTop = top;
  itsLeft = left;
  itsRight = right;
  itsBottom = bottom;
  
  itsUpperLeft.SetX(left);
  itsUpperLeft.SetY(top);
  
  itsUpperRight.SetX(right);
  itsUpperRight.SetY(top);
  
  itsLowerLeft.SetX(left);
  itsLowerLeft.SetY(bottom);
  
  itsLowerRight.SetY(right);
  itsLowerRight.SetY(bottom);
}

int Rectangle::GetArea() const
{
    int Width = itsRight-itsLeft;
    int Height = itsTop-itsBottom;
    return (Width*Height);
}

int main()
{
    using namespace std;
    Rectangle MyRectangle (100,20,50,80);
    
    int Area = MyRectangle.GetArea();
    
    cout<<"Area: "<<Area<<endl;
    cout<<"Upper left  X coordinate: ";
    cout<<MyRectangle.GetUpperLeft().GetX();
    
    return 0;
}
