#include <stdio.h>
int main()
{
    int a, b=0,remainder,c;

    printf("Enter an integer: ");
    scanf("%d",&a);
    c=a;
    while(a!=0)
    {
    remainder = a%10;
    b=b*10+remainder;
    a/=10;
    }
    if(c==b)
    printf("%d is a palindrome.",c);
    else
    printf("%d is not a palindrome.",c);
    return 0;
}
