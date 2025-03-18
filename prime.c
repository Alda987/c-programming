#include<stdio.h>
int main()
{
 int limit,i,isprime,j;
 printf("enter the limit");
 scanf("%d",&limit);
 printf("prime numbers upto the limit are %d",limit);
 for(i=2;i<limit;i++)
 {
 isprime=1;
 for(j=2;j<=i/2;j++)
 {
 if(i%j==0)
 {
 isprime=0;
 break;
 }
 }
 if (isprime)
 {
 printf("%d\t",i);
 }
 }
 return 0;
}
