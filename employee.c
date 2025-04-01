#include<stdio.h>
struct employee{
char name[50];
int id;
float salary;
};
int main(){
int n;
printf("enter the number of employees:");
scanf("%d",&n);
struct employee emp[n];
for(int i=0;i<n;i++)
{
printf("enter the details of employees is %d:\n",i+1);
printf("name:");
scanf("%s",emp[i].name);
printf("ID:");
scanf("%d",&emp[i].id);
printf("salary:");
scanf("%f",&emp[i].salary);
}
printf("enter the employee details:");
for(int i=0;i<n;i++)
{
printf("name:%s,ID:%d,salary:%f\n",emp[i].name,emp[i].id,emp[i].salary);
}
return 0;
}
