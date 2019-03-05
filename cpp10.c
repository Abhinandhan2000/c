#include<stdio.h>
void main()
{
int a,b,c;
printf("enter Ram's,Shyam's & Ajay's age ");
scanf("%d%d%d",&a,&b,&c);
if((a<b)&&(a<c))
{
printf("Ram is youngest");
}
else if((b<a)&&(b<c))
{
printf("Shyam is youngest");
}
else
printf("Ajay is youngest");
}
