#include <iostream>
using namespace std;
int convertToNumber(char input[],int startPos, int endPos); 
int power(int base, int exponent);
int sum(int num1, int num2);
int diff(int num1, int num2);
int multi(int num1, int num2);
int div(int num1, int num2);
int main( int argc, char* argv[] ) {
	int i;
	int opPos = -1;
	for(i=0;argv[1][i]!='\0';i++){
		if (argv[1][i]=='+' || argv[1][i]=='-' || argv[1][i]=='*' || argv[1][i]=='/'){
        	opPos=i;
        }
               
	}

    if(opPos==-1) {
         cout << "Invalid operation" << endl;        
         return -1;
    }
	int num1;
	num1 = convertToNumber(argv[1],0,opPos);
	int num2;
	num2 = convertToNumber(argv[1],opPos+1,i);

    if(argv[1][opPos]=='+'){
	    cout << sum(num1,num2) << endl;
    }
    if(argv[1][opPos]=='-'){
	    cout << diff(num1,num2) << endl;
    }
    if(argv[1][opPos]=='*'){
	    cout << multi(num1,num2) << endl;
    }
    if(argv[1][opPos]=='/'){
	    cout << div(num1,num2) << endl;
    }
	return 0;
}

int convertToNumber(char input[], int startPos, int endPos) {
	int i;
	int base=10;
	int num=0;
	for(i=startPos; i<endPos; ++i) { 
		num = num + 
		      ( ( input[ i ] - '0' ) * ( power( base, endPos - i - 1 ) ) );
	}
	return num;
}
 
int power(int base,int exponent) {
	int i;
	int pow=1;

	for (i=0; i<exponent; i++) {
		pow=base*pow; 
	}
	return pow;
}

int sum(int num1, int num2){
    return num1 + num2;
}

int diff(int num1, int num2){
    int diff = num1 - num2;
    return diff;
}
int multi(int num1, int num2){
    return num1 * num2;
}

int div(int num1, int num2){
    return num1 / num2;
}
