#include <iostream>
using namespace std;
int power(int baseNum, int powNum);
int main(){
    
    int baseNum, powNum;

    cout << "Enter exponents:" << endl;
    cin >> baseNum;
    cin >> powNum;

    cout << power(baseNum,powNum) << endl;    
    
    return 0;
}

int power(int baseNum, int powNum){
    
    int result = 1;
    int i;
    for(i=0;i<powNum;i++){
    result = result*baseNum;
    }
    return result;
}
