/*Debido a que no es necesario utilizar las llaves cuando en alguna o en ambas partes de la variante if-else hay 
una sola sentencia, su omisión podría generar ambigüedades en la evaluación de las sentencias condicionales
anidadas.

Por ejemplo, si una variante if-else anida en una variante if como se muestra a continuación*/

#include <stdio.h>
main()
{
    int n,a,b,z;

    n=3;
    a=-3;
    b=2;
    z=0;
    if (n>0)
        if (a>b)
            z=a;
        else
            z=b;

    printf("z = %d\n", z);
} 

/*entonces hemos de tener claro si la parte del else corresponde al primero o al segundo if.

Por regla general, un else siempre se asocial al if más cercano que no tiene else. En este caso, la parte else se
asocia al if más interno (a > b) y el programa mostraría en pantalla el mensaje z = 2

Si se quiere asocial el else al if más externo (if (n>0)), entonces es necesario utilizar las llaves y forzar la anidacion 
deseada, como se muestra a continuación*/

/*
    #include <stdio.h>
    main()
    {
        int n,a,b,z;

        n=3;
        a=-3;
        b=2;
        z=0;
        if (n>0)
        {
            if (a>b)
                z=a;
        }
        else
            z=b;

        printf("z = %d\n", z);
    } 
*/