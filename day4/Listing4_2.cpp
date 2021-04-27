//if,else

/*This program asks for the user to input scores for two baseball teams; the scores
are stored in integer variables, MetsScore and YankeesScore. */

#include <iostream>

using std::cout;
using std::endl;
using std::cin;

int main()
{
    int MetsScore,YankeeScore;
    
    while(1)
    {
    cout<<"Enter the score for the Mets: "<<endl;
    cin>>MetsScore;
    cout<<"Enter the score for the Yankee: "<<endl;
    cin>>YankeeScore;
    
    if (MetsScore > YankeeScore)
    cout<<"Go Mets"<<endl;
    
    else if (YankeeScore>MetsScore)
    cout<<"Go Yankee"<<endl;
    
    if (MetsScore == YankeeScore)
    cout<<"A tie? Really??"<<endl;
    
    }
    
    return 0;
}
