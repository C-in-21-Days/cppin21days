#include <iostream>

using namespace std;

enum choice{
    DrawRect = 1,GetArea,GetPerim,ChangeDimensions,Quit
}; // creating a new type with variables

/* Rectangle class declaration */

class Rectangle
{
  public:
  //constructor
  Rectangle(int width, int height);
  //deconstructor - cleaning the memory alocated for the constructor
  ~Rectangle();
  
  //Accessors
  int GetHeight() const { return itsHeight; }
  int GetWidth() const { return itsWidth; }
  int GetArea() const {return itsWidth*itsHeight; }
  int GetPerim() const {return 2*itsHeight + 2*itsWidth; }
  void SetSize(int newWidth, int newHeight);
  
  //Misc. Methods
  private:
    int itsWidth;
    int itsHeight;
};


/* Class method implementations */

//Setting the size of the width and the height of the rectangle
void Rectangle::SetSize(int newWidth, int newHeight)
{
    itsWidth = newWidth;
    itsHeight = newWidth;
}

//ading values to the provate variables of the class
Rectangle::Rectangle(int width, int height)
{
    itsWidth = width;
    itsHeight = height;
}

//why is this happening here?
Rectangle::~Rectangle() {}

/* Declaring functioins */
int DoMenu();
void DoDrawRect(Rectangle); // how is this possible 
void DoGetArea(Rectangle);
void DoGetPerim(Rectangle);

/*========== Main Function ==============*/

int main()
{
    //initialize a rectangle to 30,5
    
    Rectangle theRect(30,5);
    
    int choice = DrawRect;
    
    int fQuit = false;
    while(fQuit)
    {
        choice = DoMenu();
        
        if(choice<DrawRect || choice > Quit)
        {
            cout<<"\n Invalid choice, try again ";
            cout<<endl<<endl;
            
            continue;
        }
        
        switch (choice)
        {
            case DrawRect:
                DoDrawRect(theRect);
                break;
                
            case GetArea:
                DoGetArea(theRect);
                break;
            case GetPerim:
                DoGetPerim(theRect);
                break;
            case ChangeDimensions:
                int newHeight, newWidth;
                cout<<"New width: ";
                cin>>newWidth;
                cout<<"New Height: ";
                cin>>newHeight;
                
                theRect.SetSize(newWidth, newHeight);
                DoDrawRect(theRect);
                break;
            case Quit:
                fQuit = true;
                break;
            default:
                cout<<"Error in choice!"<<endl;
                fQuit = true;
                break;
        }
        
    }
    return 0;
}

/*===== Intialisation of the functions ========*/

int DoMenu()
{
    int choice;
    
    cout<<endl<<endl;
    cout<<" *** Menu *** "<< endl;
    cout<<"(1) Draw Rectangle"<<endl;
    cout<<"(2) Area"<<endl;
    cout<<"(3) Perimeter"<<endl;
    cout<<"(4) Resize"<<endl;
    cout<<"(5) Quit"<<endl;
    
    cin>>choice;
    return choice;
}

// This function draws a rectangle
void DoDrawRect(Rectangle theRect) // how??
{
    int height = theRect.GetHeight();
    int weight = theRect.GetWidth();
    
    for (int i=0;i<height;i++)
        {
            for(int j=0;j<weight;i++)
                cout<<"*";
            cout<<endl;
        }
}

//using an object to get the Area 
void DoGetArea(Rectangle theRect)
{
    cout<<"Area:"<<theRect.GetArea()<<endl;
}

void DoGetPerim(Rectangle theRect)
{
    cout<<"Perimeter: "<<theRect.GetPerim()<<endl;
}
