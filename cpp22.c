#include<stdio.h>
void main()
{
	int r=0,k=0,i=0,j=0;
	printf("Enter number of rows");
	scanf("%d",&r);
	for(i=1;i<=r;i++,k=0)
	{
		for(j=1;j<=r-1;j++)
		{	printf("  ");
		}
			while(k!=2*i-1)
		{	printf("* ");
			++k;	}
			printf("\n");
			}
}
