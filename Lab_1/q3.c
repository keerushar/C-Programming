// Wap to calculate simple interest (I), by reading Principal amount (P), time(T), and rate of Interest (R)

#include<stdio.h>
#include<conio.h>

void main(){
    int time, principal,
    float si, r;
    printf("Enter principal amount\n");
    scanf("%d",&principal);
    printf("Enter time in years\n");
    scanf("%d", &time);
    printf("Enter rate\n");
    scanf("%f", &r);

    si = (principal *time * r)/100;

    printf("Simple interest is %f", si);
    getch();
}
