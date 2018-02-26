#include<stdio.h>
main()
{
    char str[10];
    int b,i;
    printf("enter the string\n");
    scanf("%s",&str);
    printf("enter the number\n");
    scanf("%d",&b);
    for(i=0;i<b;i++)
    printf("%c",str[i]);
}
