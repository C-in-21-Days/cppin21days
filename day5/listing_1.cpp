#include <iostream>

using namespace std;

int Area(int length, int width); // function prototype

int main()
{
    int length, width, area;
    
    area = Area(6,6);
    
    cout<<"Area is: "<<area<<endl;
    return 0;
}

int Area(int length, int width)
{
    return length*width;
}
