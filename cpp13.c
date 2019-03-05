#include<stdio.h>
void main()
{char d;
printf("enter choice ");
printf("S-Sunday \n M-Monday\n T-Tuesday\n W-Wednesday ");
scanf("%c",&d);
switch (d)
{
case 'S':
printf("Sunday");
break;
case 'M':
printf("Monday");
break;
case 'T':
printf("Tueday");
break;
case 'W':
printf("Wednesday");
break;
default:
printf("Wrong choice");
}
}
