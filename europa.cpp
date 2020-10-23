#include <iostream>
#include <cstdlib>
#include <cstring>
using namespace std;
int convToNum(char argv[], int startPos, int endPos);
int power(int base, int expo);
int main(int argc, char* argv[])
{
    int i; 
    int opPos=-1;
    int stringlen = atoi(argv[1]);
    cout << stringlen << endl;

    char* str = (char*) malloc(stringlen*sizeof(char));    
    strcpy(str,argv[2]);
    for(i=0;str[i]!='\0';i++)
    {
        cout << "i = " << i << endl;
        if(str[i]=='^')
        {
            opPos=i;
        }    
    }

int num1, num2;

num1=convToNum(str,0,opPos);
num2=convToNum(str,opPos+1,i);

cout << num1 << endl;
cout << num2 << endl;
cout << i << endl;

int fin;
fin=power(num1,num2);
cout << fin << endl;

free(str);
return 0;
}

int convToNum(char argv[], int startPos, int endPos)
{
    int i;
    int base=10; 
    int num=0; 
    for(i=startPos;i<endPos;i++)
    {
        num = num + ((argv[i]-'0')*power(base,i-endPos));
    }
    return num;
}

int power(int base, int expo)
{
    int i;
    int result=1;
    
    for(i=0;i<expo;i++)
    {
        result=result*base;
    }
    return result;
}
