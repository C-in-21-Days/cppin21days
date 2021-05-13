#include<iostream>

using namespace std;

int AreaCube(int length, int width = 25, int height = 1);

int main()
{
    int length = 100;
    int width = 50;
    int height = 2;
    int area;
    
    area = AreaCube(length, width, height);
    cout<<"First area equals: "<<area<<endl;
    
    area = AreaCube(length,width);
    cout<<"First area equals: "<<area<<endl;
    
    return 0;
}

int AreaCube(int length, int width, int height)
{
    return (length*width*height);
}
