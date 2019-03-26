#include<stdio.h>
void main()
{
int n,x;
int s=0;
printf("enter number ");
scanf("%d",&n);
while(n!=0)
{
x=n%10;
s=(s*10)+x;
n=n/10;
}
printf("Reversed number is %d",s);
}


