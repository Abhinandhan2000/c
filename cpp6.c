#include<stdio.h>
void main()
{
	int a,b;
	printf("enter 2 numbers :");
	scanf("%d%d",&a,&b);
	printf("the values of a and b before swaping %d\t%d\n",a,b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("the values of a and b after swaping %d\t%d\n",a,b);
}
