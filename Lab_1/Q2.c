##Wap to ask the radius of the circle with the user calculates the area of the circle and displays it.
#### In order to read real numbers, use float instead of int and %f instead of %d . 

#include<stdio.h>
#include<conio.h>
#define pi 3.14

void main(){
float radius, area;
printf("Enter radius of a circle\n");
scanf("%f",&radius);

area = pi *radius *radius;

printf("The area of circle is %f", area);
getch();
}


