// A Demonstration of typedef

#include<iostream>

typedef unsigned short int ushort; //type defined

int main()
{
	using std::cout;
	using std::endl;
	
	ushort Width = 5;
	ushort Length = 10;
	ushort Area = Width*Length;
	
	cout<<"Width: "<<Width<<endl;
	cout<<"Length: "<<Length<<endl;
	cout<<"Area: "<<Area<<endl;
	
	return 0;
}
