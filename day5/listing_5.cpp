#include<iostream>

using namespace std;

int Doubler(int AmountToDouble);

int main()
{
    
    int result = 0;
    int input;
    
    cout<<"Enter a number between 0 and 10 000 to double: ";
    cin>>input;
    
    cout<<"\nBefore doubler is called...";
    cout<<"\ninput: "<<input<<" doubled: "<<result<<endl;
    
    result = Doubler(input);
    
    cout<<"Back from Doubler..."<<endl;
    cout<<"\ninput: "<<input<<" doubled: "<<result<<endl;
    
    return 0;
}

int Doubler(int original)
{
    if (original <=10000)
    return original*2;
    else
    return -1;
}
