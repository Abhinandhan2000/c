#include<stdio.h>
void main()
{int s=0;int n;float a;
printf("Enter the limit ");
scanf("%d ",&n);
for(int i=0;i<=n;i++)
{s=s+i;
}
printf("Sum = %d",s);
a=s/n;
printf("Average = %f",a);
}
