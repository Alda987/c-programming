#include<stdio.h>
int main()
{
char str[100];
int length,i;
printf("enter the string:");
scanf("%[^\n]",str);
for(i=0;str[i]!='\0';i++)
if(str[i]>='a'&&str[i]<='z')
{
str[i]=str[i]-32;
}
else
{
str[i]=str[i];
}
printf("%s",str);
return 0;
}
