#include <stdio.h>
main()
{
int a,b,c;
printf("enter the three numbers");
scanf("%d%d%d",&a,&b,&c);
if(a>b&&a>c)
printf("%d is greatest",a);
if(b>c && b>c)
printf("%d is greatest",b);
if (c>a && c>b)
printf("%d is grastest",c);
}
