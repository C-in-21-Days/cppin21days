// This program prints the character values for the integers 32 through 127. On line 7, the number in the variable i is forced to display as a char

#include<iostream>
int main()
{
	for (int i=32; i<128;i++)
		std::cout<<(char) i;
	return 0;
}
