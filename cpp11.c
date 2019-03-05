#include<stdio.h>
void main()
{float p,c,m,e,s;
float per,sum;
printf("enter 5 subject marks ");
scanf("%f%f%f%f%f",&p,&c,&m,&e,&s);
sum=p+c+m+e+s;
per=(sum/500)*100;
printf("Total= %f ",sum);
printf("percentage= %f ",per);
if(per>=60)
{printf("First class  ");
}
else if(per>=50 && per<=59)
{printf("Second class ");
}
else if (per>=40 && per<=49)
{printf("Third class ");
}
else 
{printf("Fail ");
}
}
