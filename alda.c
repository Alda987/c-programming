#include<stdio.h>
int main()
{
int a[20],i,max,min,pos1=0,pos2=0,n;
printf("enter the array size");
scanf("%d",&n);
printf("enter the elements");
 for(i=0;i<n;i++)
 {
   scanf("%d",&a[i]);
 }
 max=a[0];
 min=a[0];
 for(i=1;i<n;i++)
 {
 if (a[i]>max)
 {
   max=a[i];
   pos1=i;
 }
 if (a[i]<min)
 {
 min=a[i];
 pos2=i;
 }
 }
printf("max is %d in at position %d",max,pos1);
printf("min is %d in at position %d",min,pos2);
return 0;
}

 

