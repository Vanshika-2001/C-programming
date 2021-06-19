#include <stdio.h>
int fact(int n)
{
    int i,s=1;
 for(i=1;i<=n;i++)
 s=s*i;
 return s;
}
int main()
{
 int r;
 r=fact(4);
 printf("%d\n",r);
 return 0;
}