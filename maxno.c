#include<stdio.h>
main()
{
    int a,b,c,d;
    printf("enter the num\n");
    scanf("%d",&a);
printf("enter the numbers\n",a);
scanf("%d%d%d",&b,&c,&d);
if(d>c)
printf("%d",d);
else if(d>b)
printf("%d",d);
else if(c>b)
printf("%d",c);
else if(c>d)
printf("%d",c);
else if(b>c)
printf("%d",b);
else if(b>d)
printf("%d",b);
}
