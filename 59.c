#include <stdio.h>
main()
{
    int a,b,c,d,e,f,g,h,i,j;
    printf("enter the 10 numbers\n");
    scanf("%d %d %d %d %d %d %d %d %d %d",&a,&b,&c,&d,&e,&f,&g,&h,&i,&j);
    if(a>(b,c,d,e,f,g,i,j,h))
    printf("%d",a);
     if(b>(a,c,d,e,f,g,i,j,h))
    printf("%d",b);
     if(c>(b,a,d,e,f,g,i,j,h))
    printf("%d",c);
     if(d>(b,c,a,e,f,g,i,j,h))
    printf("%d",d);
     if(e>(b,c,d,a,f,g,i,j,h))
    printf("%d",e);
     if(f>(b,c,d,e,a,g,i,j,h))
    printf("%d",f);
     if(g>(b,c,d,e,f,a,i,j,h))
    printf("%d",g);
     if(h>(b,c,d,e,f,g,h,i,j,h))
    printf("%d",h);
     if(i>(b,c,d,e,f,g,a,h,j))
    printf("%d",i);
     if(j>(b,c,d,e,f,g,i,a,h))
    printf("%d",j);
}
