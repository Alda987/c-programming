#include<stdio.h>
int main()
{
 int n,i,fact=1;
 printf("enter the number");
 scanf("%d",&n
 );
 if(n<0)
 {
   printf("\n wrong entry");
 }
 else if(n==0)
 {
   printf("\n factorial=1");
 }
 else
 {
   for(i=1;i<=n;i++)
   fact=fact*i;
   printf("factorial of the number is %d",fact);
 }
 return 0;
}
