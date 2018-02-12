#include <stdio.h>
main()
{
    int z,a,b;
    printf("enter the limit\n");
    scanf("%d%d",&a,&b);
    printf("Print Odd Numbers in a given range a to b:\n");
    for (z=a;z<=b;z++)
        {
          if (z%2 == 1)
          printf ("%d ",z);
         }
}
