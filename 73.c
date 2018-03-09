#include<stdio.h>
main()
{
int a,b,c;
printf("enter the number\n");
scanf("%d",&a);
printf("enter L and R");
scanf("%d %d",&b,&c);
if(a>b&&a<c)
{
    printf("yes");
}
else
{
    printf("no");
}
}
