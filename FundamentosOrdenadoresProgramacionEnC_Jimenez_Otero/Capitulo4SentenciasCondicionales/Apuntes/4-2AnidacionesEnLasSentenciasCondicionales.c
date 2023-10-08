#include <stdio.h>
main()
{
    int n,a,b,z;

    n=3;
    a=-1;
    b=2;
    z=0;
    if (n>0)
        if (a>b)
            z=a;
        else
            z=b;

    printf("z = %d\n", z);
} 