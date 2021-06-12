#include<iostream>

unsigned fib(unsigned int);

int main()
{
    int possition,answer;
    
    std::cout << "which possition" << std::endl;
    std::cin>>possition;
    
    answer = fib(possition);
    
    std::cout<<answer<<std::endl;
    
    
    return 0;
}

unsigned fib(unsigned int possition)
{
    int answer = 2, minusTwo = 1, minusOne = 1;
    if (possition<2)
    return 1;
    
    for (possition-= 3;possition!=0;possition--)
    {
        minusTwo = minusOne;
        minusOne=answer;
        answer = minusOne+minusTwo;
    }
    
    
    return answer;
}
