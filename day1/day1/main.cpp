//
//  main.cpp
//  day1
//
//  Created by Nikola Shopov on 20.03.21.
//

#include <iostream>
#include <stdio.h>

int main(int argc, const char * argv[]) { // argc - argument count; argv - argument vector; I found it on page 656, Day 17
    int x = 5;
    int y = 7;
    std::cout << std::endl;
    std::cout << x + y << " " << x * y<<std::endl; // adited by Angie on 23.03.21
    printf("%d %d",x+y,x*y); // adited by Angie on 23.03.21 - wanted to check if that will work with the stdio.h library
    std::cout << std::endl;
    return 0;
}
