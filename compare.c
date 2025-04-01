#include<stdio.h>
#include<string.h>
int main()
{
char str1[30],str2[30];
int i;
printf("enter the string:");
scanf("%s",str1);
printf("enter the string:");
scanf("%s",str2);
if (strcmp(str1,str2)==0)
{
printf("the strings are equal");
}
else
printf("the strings are not equal");
return 0;
}
