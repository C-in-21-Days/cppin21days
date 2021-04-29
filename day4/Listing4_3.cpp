/* ask for two numbers and assign them to bihNumber and littleNumber depending on which one is bigger
see if they are evenly divisible and if they are, check if they are the same number*/

#include <iostream>

using namespace std;

int main()
{
    int bigNumber, littleNumber, firstNumber, secondNumber;
    cout<<"Enter the first number"<<endl;
    cin>>firstNumber;
    cout<<"Enter the second number"<<endl;
    cin>>secondNumber;
    
    if(firstNumber > secondNumber)
        {
            bigNumber = firstNumber;
            littleNumber = secondNumber;
        }
    else if (firstNumber < secondNumber)
    {
        bigNumber = secondNumber;
        littleNumber = firstNumber;
    }
    else
    {
        cout<<"They are even, so they are evenly divisible"<<endl;
    }  
    
    //Checking which one is bigger
    cout<<"The bigger number is: "<<bigNumber<<endl;
    cout<<"The little number is: "<<littleNumber<<endl;
    
    if((bigNumber % littleNumber) == 0) //evenly divisible?
        cout<<"They are evenly divisible"<<endl;
    else
        cout<<"They are not evenly divisible"<<endl;



    return 0;
}
