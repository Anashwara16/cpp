#include <iostream>
using namespace std;
int main()
{
    int usrIn;
    int secNum=9;
    int guessCount = 1;
    while( true ) {
        cout << "Enter num:" << endl;
        cin >> usrIn;
        if ( usrIn == secNum ) {
                cout << "Correct" << endl;
                break;
        }
        guessCount++;
        if (guessCount > 3) 
        {
            cout << "You have exceeded the max no. of attempts!" << endl;
            break;
        }

    }
    return 0;
}
