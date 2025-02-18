
 
#include<stdio.h>
int main()
 {
int r1,r2,c1,c2,i,j;
printf("enter no of rows1 and columns1:");
scanf("%d%d",&r1,&c1);
printf("enter no of rows2 and columns2:");
scanf("%d%d",&r2,&c2);
int A[r1][c1],B[r2][c2];
if(r1!=r2 && c1!=c2)
 {
printf("addition is not possible");
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
 int C[r1][c1];
 for(i=0;i<r1;i++)
 {
 for(j=0;j<c1;j++)
 {
   C[i][j]=A[i][j]+B[i][j];
 }
 }
 
printf("SUM OF THE TWO MATRICES:\n");
 for(i=0;i<r1;i++)
 {
 for(j=0;j<c1;j++)
 {
  printf("%d   ",C[i][j]);
 }
printf("\n");
 }
printf("\n");
return 0;
 }


