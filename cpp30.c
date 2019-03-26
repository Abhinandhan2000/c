#include<stdio.h>
void main()
{ int a=0,b=1,d=0,n;
int c;
printf("Enter the limit ");
scanf("%d",&n);
printf("The fibonacci series is  ");
while(d<n)
{c=a+b;
a=b;
b=c;
printf("%d",c);
printf(" ");
d++;
}
}
