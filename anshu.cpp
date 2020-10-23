#include <iostream>
using namespace std;
#define nelems(arr) sizeof(arr)/sizeof(arr[0])
int main ()
{
    int myset[] = {2,4,6,8,10};
    int i;
    for(i=0;i<nelems(myset);i++)
    {
        cout << myset[i] << endl;       
    }
    return 0;
}
