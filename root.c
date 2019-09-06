#include<stdio.h>
#include<math.h>
main()
{int a,b,c;float d,x1,x2;
printf("enter the coff. of x^2");
scanf("%d",&a);
printf("enter the coff. of x");
scanf("%d",&b);
printf("enter the constant");
scanf("%d",&c);
d=b*b-4*a*c;
if(d>=0)
{
x1=-b+sqrt(d)/2*a;
x2=-b-sqrt(d)/2*a;
printf("x1=%fand x2=%f",x1,x2);
}

else
{d=-d;
d=sqrt(d);
printf("x1=%f+%fi,"-b/(2*a),d/(2*a));
printf("x2=%f-%fi,"-b/(2*a),d/(2*a));
}
}
