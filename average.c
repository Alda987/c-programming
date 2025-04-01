#include<stdio.h>
int main()
{
int n,i,sum=0,average;
printf("enter the number of elements:");
scanf("%d",&n);
int arr[n];
printf("enter %d numbers:",n);
for(i=0;i<n;i++)
{
scanf("%d",&arr[i]);
sum+=arr[i];
}
average=sum/n;
printf("the average of the number is %d",average);
return 0;
}
