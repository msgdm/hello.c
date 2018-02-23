#include<stdio.h>
main()
{
    int a,b,c;
    printf("enter the number\n");
    scanf("%d%d",&a,&b);
    c=a+b;
    if(c%2==0)
    printf("even\n");
    else
    printf("odd\n");
}
