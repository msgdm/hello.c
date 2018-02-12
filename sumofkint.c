#include<stdio.h>
main()
{
    int a,b,c,d,e,f,g;
    printf("enter the numbers\n");
    scanf("%d%d",&a,&b);
    printf("enter the %d numbers\n",a);
    scanf("%d%d%d%d%d",&c,&d,&e,&f,&g);
    if(b==1)
    printf("%d",c);
    else if(b==2)
    printf("%d",c+d);
    else if(b==3)
    printf("%d",c+d+e);
    else if(b==4)
    printf("%d",c+d+e+f);
    else if(b==5)
    printf("%d",c+d+e+f+g);
}
