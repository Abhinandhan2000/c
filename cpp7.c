#include<stdio.h>
void main()
{
float l,b,r,a1,a2,p1,p2;
printf("enter length & breadth of rectangle");
scanf("%f%f",&l,&b);
a1=l*b;
p1=(l+b);
printf("enter radius of circle");
scanf("%f",&r);
a2=3.14*r*r;
p2=2*3.14*r;
printf("area and perimeter of rectangle is %f%f",a1,p1);
printf("area and circumference of circle is %f%f",a2,p2);
}
	
