#include<stdio.h>
main()
{
char a[10];
int i,b;
printf("enter the string\n");
scanf("%s",&a);
printf("enter the repeating times\n");
scanf("%d",&b);
for(i=1;i<=b;i++)
printf("%s\t",a);
}
