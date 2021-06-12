#include<iostream>

int main()
{
    int row,column;
    char letter;
    
    std::cout << "how many rows?" << std::endl;
    std::cin >> row;
    std::cout << "how many columns?" << std::endl;
    std::cin >> column;
    std::cout << "what character?" << std::endl;
    std::cin >> letter;
    
    for(int i=1;i<=row;i++)
    {
        for(int j=1;j<=column;j++)
        std::cout<<letter;
        
        std::cout<<std::endl;
    }
    
    return 0;
}
