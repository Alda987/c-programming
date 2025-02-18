#include<stdio.h>
int main()
 {
int a[10][10],b[10][10];
printf("enter no of rows1 and columns1:");
scanf("%d%d",&r1,&c1);
printf("enter no of rows2 and columns2:");
scanf("%d%d",&r2,&c2);
int A[r1][c1],B[r2][c2];
if(r1!=r2 && c1!=c2)
 {
printf("multiplicati is not possible");
return 0;
 }
printf("enter the elements of first matrix:");
 for(i=0;i<r1;i++)
 {
 for(j=0;j<c1;j++)
 {
   scanf("%d",&A[i][j]);
 }
 }
printf("enter the elements of second matrix:");
 for(i=0;i<r2;i++)
 {
 for(j=0;j<c2;j++)
 {
  scanf("%d",&B[i][j]);
 }
 }
 result[i][j]=0;
 for(int i=0;i<r1;i++)
 {
 for(int j=0;j<c1;j++)
 {
 printf("%d",multiply[i][j]);
 }
 printf("\n");
 }
 return 0;
 }
