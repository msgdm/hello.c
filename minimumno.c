#include<stdio.h>
main()
{
    int a,b,c,d;
    printf("enter the num\n");
    scanf("%d",&a);
printf("enter the numbers\n",a);
scanf("%d%d%d",&b,&c,&d);
if(b<c<d)
printf("%d",b);
else if(c<b<d)
printf("%d",c);
else if(d<c<b)
printf("%d",d);
}
