//Listing 13.1
//
// Created by Angie on 22.01
//
// Array
/*
#include <iostream>
using namespace std;

int main()
{
    int myArray[5];
    int i;
    
    for(i=0; i<5; i++)
    {
        cout<<"Value of myArray["<<i<<"]";
        cin>>myArray[i];
    }
    
    for(i=0; i<5; i++)
    {
        cout<<i<<":"<<myArray[i]<<endl;
    }
    return 0;
}
*/

//Listing 13.2
//
// Created by Angie on 22.01
//
// Past end of an array
/*
#include <iostream>
using namespace std;

int main()
{
    //sentinels
    long sentinelOne[3];
    long TargetArray[25];
    long sentinelTwo[3];
    int i;
    for(i=0; i<3; i++)
    {
        sentinelOne[i] = 0;
        sentinelTwo[i] = 0;
    }
    for (i=0; i<25; i++)
    {
        TargetArray[i] = 10;
    }
    
    cout<<"Test 1:"<<endl;
    cout<<"TargetArray[0]"<<TargetArray[0]<<endl;
    cout<<"TargetArray[24]"<<TargetArray[24]<<endl<<endl;
    
    for(i=0; i<3; i++)
    {
    cout<<"sentinelOne["<<i<<"]: "<<sentinelOne[i]<<endl;
    cout<<"sentinelTwo["<<i<<"]: "<<sentinelTwo[i]<<endl;
    }
    
    cout<<"\nAssining...";
    for(i = 0; i<=25; i++)
        TargetArray[i] = 20;
    
    cout<<"Test 2:"<<endl;
    cout<<"TargetArray[0]"<<TargetArray[0]<<endl;
    cout<<"TargetArray[24]"<<TargetArray[24]<<endl<<endl;
    cout<<"TargetArray[25]"<<TargetArray[25]<<endl<<endl;
    
    for(i=0; i<3; i++)
    {
    cout<<"sentinelOne["<<i<<"]: "<<sentinelOne[i]<<endl;
    cout<<"sentinelTwo["<<i<<"]: "<<sentinelTwo[i]<<endl;
    }
    
    return 0;
}
*/
//Listing 13.3
//
// Created by Angie on 22.01
//
// Using consts and enums in arrays
/*
#include <iostream>
using namespace std;

int main()
{
    enum WeekDays {Mon, Tue, Wed, Thu, Fri, Sat, Sun, DaysinWeek};
    int ArrayWeek[DaysinWeek] = {10, 20, 30, 40, 50, 60, 70};
    
    cout<<"The value of Tuesday is "<<ArrayWeek[Tue]<<endl;
    
    return 0;
}
*/

//Listing 13.4
//
// Created by Angie on 22.01
//
// Using consts and enums in arrays
/*
#include <iostream>
using namespace std;

class Cat
{
private:
    int itsAge, itsWeight;
public:
    Cat():itsAge(1),itsWeight(5){}
    ~Cat(){}
    int GetAge() const {return itsAge;}
    int GetWeight() const {return itsWeight;}
    void SetAge(int age) {itsAge = age;}
};

int main()
{
    Cat Litter[5];
    int i;
    for(i=0; i<5; i++)
        Litter[i].SetAge(2*i +1);
    
    for(i=0; i<5; i++)
    {
        cout<<"Cat #"<<i+1<<": ";
        cout<<Litter[i].GetAge()<<endl;
    }
    
    return 0;
}
*/

//Listing 13.5
//
// Created by Angie on 22.01
//
// multidimentional array
/*
#include <iostream>
using namespace std;

int main()
{
    int myArray[2][5] = {{0,1,2,3,4},{0,2,4,6,8}};
    for (int i=0; i<2; i++) {
        for (int j=0; j<5; j++) {
            cout<<"myArray["<<i<<"] ["<<j<<"]: "<<myArray[i][j]<<endl;
        }
    }
    
    return 0;
}
*/

//Listing 13.6
//
// Created by Angie on 22.01
//
// arrays and pointers
/*
#include <iostream>
using namespace std;

class Cat
{
private:
    int itsAge, itsWeight;
public:
    Cat():itsAge(1),itsWeight(5){}
    ~Cat(){}
    int GetAge() const {return itsAge;}
    int GetWeight() const {return itsWeight;}
    void SetAge(int age) {itsAge = age;}
};

int main()
{
    Cat *Family[500];
    int i;
    Cat *pCat = 0;
    for(i=0; i<500; i++)
    {
        pCat = new Cat;
        pCat -> SetAge(2*i + 1);
        Family[i] = pCat;
    }
    
    for (i=0; i<500; i++)
    {
        cout<<"Cat #"<<i+1<<": "<<Family[i]->GetAge()<<endl;
    }
    
    return 0;
}
*/

//Listing 13.7
//
// Created by Angie on 22.01
//
// Parse out words from a character string
/*
#include <iostream>
#include <ctype.h>
#include <string.h>

using namespace std;

bool GetWord(char* theString, char *word, int &wordOffset);

int main()
{
    const int bufferSize = 255;
    char buffer[bufferSize+1]; //hold the entire string
    char word[bufferSize+1]; //hold the word
    int wordOffset = 0; //start at the beggining
    
    cout<<"Enter a string: ";
    cin.getline(buffer, bufferSize);
    
    while(GetWord(buffer, word, wordOffset))
        cout<<"Got this word: "<<word<<endl;
    
    return 0;
}

//function to parse words from a string

bool GetWord(char *theString, char *word, int &wordOffset)
{
    if (theString[wordOffset] == 0) //end of string?
        return false;
    char *p1, *p2;
    p1 = p2 = theString+wordOffset; //point to the next word
    
    //eat leading spaces
    for (int i=0; i<(int)strlen(p1) && !isalnum(p1[0]); i++) {
        p1++;
    }
    
    //see if you have a word
    if(!isalnum(p1[0]))
        return false;
    
    //p1 now points to start the next word
    //point p2 there as well
    p2 = p1;
    
    //march p2 to end of word
    while (isalnum(p2[0]))
        p2++;
    //p2 is now at end of word
    //p1 is at the beggining of word
    //length of word is the difference
    int len = int (p2-p1);
    
    //copy the word into the buffer
    strncpy(word, p1, len);
    
    //null terminate it
    word[len] = '\0';
    
    //now find the beginning of the next word
    for(int j = int(p2-theString); j<(int)strlen(theString) && !isalnum(p2[0]);j++)
        p2++;
    
    wordOffset = int(p2-theString);
    
    return true;
}
*/

//Listing 13.8
//
// Created by Angie on 22.01
//
// An array on the free store
/*
#include <iostream>
using namespace std;

class Cat
{
private:
    int itsAge;
public:
    Cat():itsAge(1){}
    ~Cat(){cout<<"Destructor called"<<endl;}
    int GetAge() const {return itsAge;}
    void SetAge(int age) {itsAge = age;}
};

int main()
{
    Cat *Family = new Cat[500];
    int i;
    
    for (i=0; i<500; i++)
    {
        Family[i].SetAge(2*i+1);
    }
    
    for (i=0; i<500; i++)
        cout<<"Cat #"<<i+1<<": "<<Family[i].GetAge()<<endl;
    
    delete [] Family;
    
    return 0;
}
*/

//Listing 13.9
//
// Created by Angie on 22.01
//
// Relocating an array at runtime
/*
#include <iostream>
using namespace std;

int main()
{
    int AllocationSize = 5;
    int *pArrayOfNumbers = new int[AllocationSize];
    int ElementsUsedSoFar = 0;
    int MaximumElementsAllowed = AllocationSize;
    int InputNumber = 0;
    
    cout<<endl<<"Next Number = ";
    cin>>InputNumber;
    
    while(InputNumber > 0)
    {
        pArrayOfNumbers[ElementsUsedSoFar++] = InputNumber;
        
        if(ElementsUsedSoFar == MaximumElementsAllowed)
        {
            int *pLargerArray = new int[MaximumElementsAllowed+AllocationSize];
            for (int CopyIndex = 0; CopyIndex<MaximumElementsAllowed; CopyIndex++)
            {
                pLargerArray[CopyIndex] = pArrayOfNumbers[CopyIndex];
            }
            
            delete [] pArrayOfNumbers;
            pArrayOfNumbers = pLargerArray;
            MaximumElementsAllowed+= AllocationSize;
        }
        cout<<endl<<"Next number = ";
        cin>>InputNumber;
    }
    
    for (int Index = 0; Index<ElementsUsedSoFar; Index++)
    {
        cout<<pArrayOfNumbers[Index]<<endl;
    }
    
    return 0;
}
*/

//Listing 13.10/11
//
// Created by Angie on 22.01
//
// Filling an array
/*
#include <iostream>
using namespace std;

int main()
{
    char buffer[80];
    cout<<"Enter the string: ";
    cin.get(buffer,79);
    cout<<"Here is the buffer: "<<buffer<<endl;
    
    return 0;
}
*/


//Listing 13.12
//
// Created by Angie on 22.01
//
// Using strcpy()
/*
#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    char String1[] = "No man is an island";
    char String2[80];
    
    strcpy(String2, String1);
    
    cout<<"String 1: "<<String1<<endl;
    cout<<"String 2: "<<String2<<endl;
    
    return 0;
}
*/

//Listing 13.13
//
// Created by Angie on 22.01
//
// Using strncpy()
/*
#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    const int MaxLenght = 80;
    char String1[] = "No man is an island";
    char String2[MaxLenght+1];
    
    strncpy(String2, String1, MaxLenght);
    
    cout<<"String 1: "<<String1<<endl;
    cout<<"String 2: "<<String2<<endl;
    
    return 0;
}
*/

// Tic-tac-toe

#include <iostream>
using namespace std;

int main()
{
    char tictac[3][3] = {0,0,0,0,0,0,0,0,0};
    
    
    return 0;
}
