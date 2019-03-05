#include<stdio.h>
void main()
{float a,b,c;
char d;
printf("enter choice ");
printf("\n +=ADD\n -=SUBTRACT\n *=MULTIPLY\n /=DIVISION\n ");
scanf("%c",&d);
switch(d)
{
case '+':
printf("Enter 2 numbers ");
scanf("%f%f",&a,&b);
c=a+b;
printf("Sum of 2 numbers = %f ",c);
break;
case '-':
printf("Enter 2 numbers ");
scanf("%f%f",&a,&b);
c=a-b;
printf("Difference of 2 numbers = %f ",c);
break;
case '*':
printf("Enter 2 numbers ");
scanf("%f%f",&a,&b);
c=a*b;
printf("Product of 2 numbers = %f ",c);
break;
case '/':
printf("Enter 2 numbers ");
scanf("%f%f",&a,&b);
c=a/b;
printf("Division  of 2 numbers = %f ",c);
break;
default:
printf("Wrong choice");
}}



