#include<stdio.h>
int main()
{
 int n,i=1;
 printf("enter the number");
 scanf("%d",&n);
 while(i<=n)
 {
  if (n%i==0)
  {
   printf("%d",i);
 }
  i++;
 }
 printf("\n");
 return 0;
}
