#include <stdio.h>
int fact(int n)
{
 if(n==0)
 return 1;
 else if(n>=1)
 return fact(n-1)*n;
 else
 return 0;
}
int main()
{
 int r;
 r=fact(5);
 printf("%d\n",r);
 return 0;
}