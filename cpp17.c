#include<stdio.h>
void main()
{
int r,c;
printf("Enter number of rows and columns ");
scanf("%d%d",&r,&c);
for(int i=1;i<=r;i++)
{
for(int j=1;j<=c;j++)
{
printf("%d",j);
}
printf("\n");
}
}
