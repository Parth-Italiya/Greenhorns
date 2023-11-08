#include<stdio.h>
#include<conio.h>

void main(){

float BS,HRA,DA,TA;

clrscr();

printf("enter base salary: ");
scanf("%f",&BS);

HRA=(BS*10)/100;
DA=(BS*5)/100;
TA=(BS*8)/100;
printf("total salary is : %f",HRA+DA+TA);

getch();
}