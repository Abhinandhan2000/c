#include<stdio.h>
void main()
{
int a,b,c;
printf("enter 3 numbers ");
scanf(" %d%d%d",&a,&b,&c);
if((a>b)&&(a>c))
{
printf("The greatest number is %d",a);
}
else if((b>a)&&(b>c))
{
printf("The greatest number is %d",b);
}
else
printf("The greatest number is %d",c);
}
