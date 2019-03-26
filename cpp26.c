#include<stdio.h>
void main()
{
int n,x,m;
int s=0;
printf("enter number ");
scanf("%d",&n);
m=n;
while(n!=0)
{
x=n%10;
s=(s*10)+x;
n=n/10;
}
printf("%d",s);
if(m==s)
{
printf("The number is a palindrome");
}
else
{
printf("The number is not a palindrome");
}}
