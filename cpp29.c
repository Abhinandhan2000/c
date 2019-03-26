#include<stdio.h>
void main()
{int n;
int f=1;
printf("Enter number ");
scanf("%d",&n);
for(int i=1;i<=n;i++)
{
f=f*i;
}
printf("Factorial of number is  %d",f);
}
