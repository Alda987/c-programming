#include<stdio.h>
int ispalindrome(int num)
{
int original=num,reversed=0,digit;
while (num>0)
 {
digit=num%10;
reversed=reversed*10+digit;
 num/=10;
 }
return original==reversed; 
}
int main()
 {
 int num;
 printf("enter the number");
 scanf("%d",&num);
 if(ispalindrome(num))
 {
    printf("%d is a palindrome\n",num);
 }
 else
 {
   printf("%d is not a palindrome\n",num);
 }
 return 0;
}
