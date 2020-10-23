#include <iostream>
#include <cstdlib>
using namespace std;
int fact( int num ) {
    if ( num > 1 ) { 
        return num * fact( num - 1 ); 
    } else {
        return 1;
    }
}
int main(int argc, char *argv[]) 
{
    int value = atoi( argv[1] ); 
    cout << "Factorial is " << fact( value ) << "\n" ;
    return 0;
}


