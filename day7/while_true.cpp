#include<iostream>

int main()
{
    using namespace std;
    
    int counter = 0;
    
    while (true)
    {
        counter++;
        if(counter>10)
        break;
    }
    cout<<counter<<endl;
    return 0;
}
