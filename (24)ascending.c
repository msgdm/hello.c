#include<stdio.h>
main()
{
    int a,b[100],i,j,c;
    printf("enter the number for a\n");
    scanf("%d",&a);
    printf("enter the value for b\n");
    for(i=0;i<+a;++i)
    scanf("%d",&b[i]);
for(i=0;i<a;++i)
{
for(j=i+1;j<a;++j)
{
if(b[i]>b[j])
{
c=b[i];
b[i]=b[j];
b[j]=c;
}
}
}
printf("the ascending order numbers are \n");
for(i=0;i<a;++i)
printf("%d",b[i]);
}
