#include <stdio.h>
#include <stdlib.h>
#include<iostream>
using namespace std;
int main()
{
     char A[]="finding";
     int i;
     long int H=0,x;
     for(i=0; A[i]!='\0'; i++)
     {
         x=1;
         x=x<<A[i]-97;
         if(x && H>0)
         {
             cout<<"Duplicate"<<endl;
             cout<<A[i]<<endl;
         }
         else
         H = x||H;
    }
 return 0;
}