#include<stdio.h>
void swap(int a, int b)
{
    int c = a;
    a = b;
    b = c;
}
 
int main()
{
    int q, z;
    printf("Enter Value of q ");
    scanf("%d", &q);
    printf("\nEnter Value of z ");
    scanf("%d", &z);
    swap(&q, &z);
    printf("\nAfter Swapping: q = %d, z = %d", z,q);
    return 0;
}
