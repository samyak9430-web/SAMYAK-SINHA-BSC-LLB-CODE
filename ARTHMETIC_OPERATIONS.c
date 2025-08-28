//Azhar, 13th sep 2024
//wap to perform arithmetic operations on two numbers(+,-,*,/,%)
#include <stdio.h>
void main()
{
int a,b,result;
printf("enter two number");
scanf("%d%d",&a,&b);
result=a+b;
printf("sum=%d",result);
result=a-b;
printf("Diff=%d",result);
result=a*b;
printf("product=%d",result);
result=a/b;
printf("Division=%d",result);
result=a%b;
printf("remainder=%d",result);
}
