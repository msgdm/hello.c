#include <stdio.h>
main(void) 
{
int arr[20],n;
scanf("%d\n",&n);
for(int i=0;i<n;i++)
{
scanf("%d\n",&arr[i]);
}
for(int i=0;i<n;i++)
{
printf("%d %d\n",arr[i],i);
}
}
