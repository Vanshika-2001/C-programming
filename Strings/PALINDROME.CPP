#include<iostream>
using namespace std;
int main()
{
    char A[]="madam";
    char B[6];
    int i;
    int j;
    for(i=0;A[i]!='\0';i++){

    }
    i=i-1;
    for(j=0;i>=0;i--,j++) {
        B[j]=A[i];

    }
    B[j]='\0';
    if(A[i]==B[j])
    cout <<"Palindrome"<<endl;

 return 0;
}