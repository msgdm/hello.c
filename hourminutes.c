#include<stdio.h>
main()
{
    int a,b;
    printf("enter the time in minutes\n");
    scanf("%d",&a);
    if(a>60)
    {
    b=60*a;
    printf("hours:%d\n",b);
    }
    else
    {
    printf("0\n");
    }
    printf("%d",a);
}
