#include<stdio.h>
# define pi 3.142
# define circumference(r)(pi*r*r)
# define surface_area_of_cylinder(r,h)(2*pi*r*(r+h))
int main()
{ 
float r,h,area,surface_area;
printf("enter radius of circle and cylinder");
scanf("%f",&r);
printf("enter the height of cylinder");
scanf("%f",&h);
area=circumference(r);
surface_area=surface_area_of_cylinder(r,h);
printf("the area of circle is %2f\n",area);
printf("the area of cylinder is %2f\n",surface_area);
return 0;
}
