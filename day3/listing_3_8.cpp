//A Demonstration of Enumerated Constants

#include <iostream>

int main()
{
    enum Days {Monday,Tuesday,Wednesday,Thursday,Friday,Saturday,Sunday};
    
    Days today;
    today = Saturday;
    
    if(today == Saturday || today == Sunday)
        std::cout<<"You gotta love the weekends"<<std::endl;
        
    else
        std::cout<<"Back to work"<<std::endl;

    return 0;
}
