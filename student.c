#include<stdio.h>
struct student{
char name[50];
int roll_no;
float mark[3];
};
int main(){
int n;
printf("enter the number of students:");
scanf("%d",&n);
struct student students[n];
for(int i=0;i<n;i++)
{
printf("enter the details of students is %d:\n",i+1);
printf("name:");
scanf("%s",students[i].name);
printf("ID:");
scanf("%d",&students[i].roll_no);
printf("enter the marks in 3 subjects:");
for(int j=0;j<3;j++){
scanf("%f",&students[i].mark[j]);
}
}
printf("\nstudent details:\n");
for(int i=0;i<n;i++)
{
float total=0;
for(int j=0;j<3;j++)
{
total+=students[i].mark[j];
}
float average=total/3;
printf("name:%s,roll_no:%d,total marks:%2f,average marks:%2f\n",students[i].name,students[i].roll_no,total,average);
}
return 0;
}
