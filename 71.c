#include<stdio.h>
main()
{
    char a[10],i,j;
    printf("enter the string\n");
    scanf("%s",&a);
for(i=0;i<a;++i)
{
for(j=0;j<a;--j)
{
if((a[i]-a[j])==0)
{
        printf("yes\n");
    }
    else
    {
    printf("no\n");
    
}
}
}
}
