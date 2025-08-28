#include<stdio.h>
void main()
{
 int m,n,i;
 printf("enter the lower limit");
 scanf("%d",&m);
 printf("enter the higher limit");
 scanf("%d",&n);
 for(i=m;i<=n;i++)
 {
   if(i%2==0)
    printf("the number %d is even\n",i);
 }
}
