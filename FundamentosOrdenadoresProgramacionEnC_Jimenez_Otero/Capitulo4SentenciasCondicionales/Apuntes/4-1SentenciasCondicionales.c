/*También llamadas sentencias de selección

Las sentencias condicionales que permite C son:

    if-else (con todas sus variantes)
        if
        if-else
        if-else-if
    switch

VARIANTE IF--------------------------------------
La sintaxis general es:

    if (condicion)
    {
        sentencias a ejecutar si la condición es cierta;
    }

Cabe tener en cuenta que:

Las sentencias asociadas al if pueden ser de cualquier tipo (sentencias de asignación, llamada a una función, sentencias 
condicionales o iterativas).

Desde el punto de vista de las normas de estilo, todas las sentencias del if han de estar indentadas entre 2 y 4 espacios

Ejemplo 1:
    #include <stdio.h>
    main()
    {
        int a;

        printf("Introduzca un numero entero positivo: ");
        scanf("%d%*c", &a);
        if (a%2 ==0)
            printf("El numero %d es un numero par\n", a);
    }

    Notar que no se han utilizado las llaves en la sentencia if debido a que solo contiene una sentencia y, en este caso, 
    las llaves pueden omitirse

Ejemplo 2:
    #include <stdio.h>
    main()
    {
        int dia, mes, año, fecha;

        printf("Introduzca una fecha en formato aaaammdd: ");
        scanf("%d%*c", &fecha);
        if (fecha >0)
        {
            dia = fecha%100;
            fecha = fecha/100;
            mes = fecha % 100;
            año = fecha/100;
            printf("La fecha es: %02d/%02d/%02d\n", dia, mes, año);
        }
    }

VARIANTE IF-ELSE-------------------------------------------------
Conocida como la sentencia condicional doble

Su sintaxis general es:

    if (condicion)
    {
        sentencias a ejecutar si la condicion es cierta;
    } 
    else
    {
        sentencias a ejecutar si la condicion es falsa;
    }

Ejemplo 1:

    #include <stdio.h>
    main ()
    {
        int a;

        printf("Introduzca un numero entero positivo: ");
        scanf("%d%*c", &a);
        if (a%2==0)
            printf("El numero %d es un numero par\n", a);
        else    
            printf("El numero %d es un numero impar\n", a);
    }

Ejemplo 2:

    #include <stdio.h>>
    main()
    {
        int edad;

        float entrada = 6.0;
        printf("Introduzca la edad de la persona: ");
        scanf("%d%*c", &edad);
        if (edad< 18)
        {
            printf("La persona es menor de edad. ");
            entrada = 0.75*entrada;
            printf("El precio de la entrada es de %.2f euros\n", entrada);
        }
        else
            printf("La persona es mayor de edad. No tiene descuento\n");
    }

VARIANTE IF-ELSE-IF---------------------------------------------
Esta variante permite implementar programas que requieren hacer selecciones múltiples

Equivale a tener la sentencia if-else anidadas (es decir, aquellas sentencias if-else que tienen otra sentencia if-else dentro
de la parte else)

La sintaxis general es:

    if (condicion1)
    {
        sentencias a ejecutar si la condicion1 es cierta:
    }
    else if(condicion2)
    {
        sentencias a ejecutar si la condicion2 es cierta;
    }
    ...
    else if (condicion_n-1)
    {
        sentencias a ejecutar si la condicion_n-1 es cierta;
    }
    else
    {
        sentencias a ejecutar si todas las condiciones anteriores son falsas;
    }

Ejemplo 1:

    #include <stdio.h>
    main()
    {
        float nota;

        printf("Introduzca su nota de FO (numero entre 0 y 10): ");
        scanf("%f%*c", &nota);
        if (nota >=9.0)
            printf("Tiene un sobresaliente");
        else if(nota>=7.0)
            printf("Tiene un notable");
        else if(nota>=5.0)
            printf("Ha aprobado");
        else  
            printf("Ha suspendido; tiene que matricularse de FO de nuevo");
    }

Ejemplo 2:

    #include <stdio.h>
    #define PI 3.141516
    main()
    {
        float vol, h, r;
        char fig;

        printf("CALCULO DE VOLUMENES:");
        printf("Introduzca el caracter e o E para esfera o ");
        printf("c o C para cilindro: ");
        scanf("%c%*c", &fig);
        if((fig=='e')||(fig=='E'))
        {
            printf("Introduzca el radio de la esfera: ");
            scanf("%f%*c", &r);

            vol=(4.0*PI*r*r*r)/3.0;
            printf("El volumen de la esfera es: %.2f\n", vol);
        }
        else if ((fig=='c')||(fig=='C'))
        {
            printf("Introduzca el radio del cilindro: ");
            scanf("%f%*c", &r);
            printf("Introduzca la altura del cilindro: ");
            scanf("%f%*c", &h);
            vol = PI*r*r*h;
            printf("El volumen del cilindro es: %.2f\n",vol);
        }
        else
            printf("El caracter introducido no es valido\n");
    }  

*/