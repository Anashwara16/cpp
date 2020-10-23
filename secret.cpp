#include <iostream>
using namespace std;
int usrInput();
int checkNum(int usrIn);
int main()
{
//    int usrIn;
    usrInput();
    return 0;
}

int usrInput()
{
    int usrIn = 5;
    cout << "Enter number:\n"; 
    checkNum(usrIn); 
    return 0;
}

int checkNum(int usrIn)
{
    int secNum=9;

//    do {
             if(usrIn!=secNum)
             {
                cout << "Incorrect number. Try again" << endl;
                usrInput();
             }   
             else
             {
                cout << "Correct" << endl;
//                break;
             } 
//       }while(usrIn==secNum);

    return 0;
}
