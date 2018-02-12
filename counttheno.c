#include<stdio.h>
main()
{
int a,b= 0;
    printf("Enter an integer: ");
    scanf("%d",&a);

    while(a!=0)
    {
        a/= 10;
        ++b;
    }
    printf("Number of digits: %d",b);
}
