#include <iostream>

int main() {

    using namespace std;
    unsigned short int number;

    while (1) {
        cout<<"Enter a number between 1 and 5: ";
        cin>>number;
        switch (number) {
            case 0:
                cout << "Too small";
                break;
            case 5:
                cout << "Good job" << endl;
            case 4:
                cout << "Nice Pick" << endl;
            case 3:
                cout << "Excellent" << endl;
            case 2:
                cout << "Masterful" << endl;
            case 1:
                cout << "Incredible" << endl;
                break;
            default:
                cout << "Too large" << endl;
                break;
        }
    }
    cout<<endl<<endl;

    return 0;
}
