#include<stdio.h>
int main()
{
int a,b,c= 0,d = 1,z;
printf("Enter the number of terms: ");
    scanf("%d", &b);

    printf("Fibonacci Series: ");

    for (a= 1; a<=b; ++a)
    {
        printf("%d, ",c);
        z=c +d;
        c=d;
        d=z;
    }
    return 0;
}
