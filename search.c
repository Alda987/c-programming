#include<stdio.h>
int main()
{
int a[10],i,key,pos=0,flag=0,n;
printf("enter the array size");
scanf("%d",&n);

 for(i=0;i<n;i++)
 {
 	printf("enter the elements");
   	scanf("%d",&a[i]);
 }
 printf("enter the key");
 scanf("%d",&key);
 for(i=0;i<n;i++)
 {
 if (a[i]==key)
 {
 flag=1;
 pos=i;
 break;
 }
 }
 if (flag==0)
 {
 printf("element not found");
 }
 else
 {
 printf("elements is %d is found at %d",key,pos);
 }
return 0;
}
