//Wap to calculate the product of two numbrs given by the users

#include<stdio.h>                                
#include<conio.h>

void main(){                                      //main function start
    int a,b;                                      //declare a variable
    printf("Enter a number\n");         
    scanf("%d",&a);                              
    printf("Enter another number");
    scanf("%d",&b);
    printf("The product of two number is %d", a*b);
    getch();  //hold the screen 
}