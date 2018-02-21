#include<stdio.h>
main()
{
char a[30],b[30];
printf("enter the string 1\t enter the string 2\n");
scanf("%s%s",&a,&b);
if(a>b)
{
    printf("%s",a);
}
else if(b>a)
{
    printf("%s",b);
}
else if(a==b)
{
    printf("%s",a);
}

}
