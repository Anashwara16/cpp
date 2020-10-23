#include <iostream>
using namespace std;

int main(){
    int i = 29;
    double j = 4.0;
    string name = "Anshu";

    int *pI = &i;
    double *pJ = &j;
    string *pName = &name;
       
    cout << &i << endl;  
    cout << pJ << endl;  
    cout << pName << endl; 

    cout << sizeof(int) << endl; 
    cout << sizeof(double) << endl; 
    cout << sizeof(string) << endl; 

    cout << *pI << endl;  
    cout << *pJ << endl;  
    cout << *pName << endl; 

    return 0; 
}
