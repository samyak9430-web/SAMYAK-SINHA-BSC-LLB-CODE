#include<stdio.h>
int main(){
  int num1,num2,greatest;
  printf("Enter the first number:");
  scanf("%d",&num1);
  printf("Enter the second number:");
  scanf("%d",&num2);
  greatest =(num1>num2)?num1:num2;
  printf("The greatest number between %d and %d is %d.\n",num1,num2,greatest);
  return 0;
  }
