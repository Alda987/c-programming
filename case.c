#include<stdio.h>
int main()
{
 int num1,num2,sum,diff,multiply,divi,mod;
 char op;
 printf("enter two numbers");
 scanf("%d,%d",&num1,&num2);
 printf("enter the operator");
 scanf(" %c",&op);
 switch(op)
  {
    case'+':
    sum=num1+num2;
    printf("sum of two numbers is %d",sum);
    break;
    case'-':
    diff=num1-num2;
    printf("difference of two numbers is %d",diff);
    break;
    case'*':
    multiply=num1*num2;
    printf("multiplication of two numbers is %d",multiply);
    break;
    case'/':
    divi=num1/num2;
    printf("division of two numbers is %d",divi);
    break;
    case'%':
    mod=num1%num2;
    printf("modulus of two numbers is %d",mod);
    break;
    default:
    printf("invalid choice");
  }
 return 0;
}
