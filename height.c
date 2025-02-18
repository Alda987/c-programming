#include<stdio.h>
int main()
{
int roll_no,age;
float height;
char grade;
printf("enter the roll no");
scanf("%d",&roll_no);
printf("enter the age");
scanf("%d",&age);
printf("the height of the student");
scanf("%f",&height);
printf("the grade of the student");
scanf(" %c",&grade);
printf("the age and roll no is %d,%d,%f,%c",roll_no,age,height,grade);
return 0;
}
