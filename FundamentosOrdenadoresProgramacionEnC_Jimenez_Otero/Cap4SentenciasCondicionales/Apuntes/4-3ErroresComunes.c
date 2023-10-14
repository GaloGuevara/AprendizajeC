/*A continuación se indican los errores más comunes que se cometen al utilizar las sentencias condicionales que son sencillos
de encontrar porque son errores semánticos o de ejecución*/


//Uso del operador de la asignación en lugar del operador relaconal de igualdad en la condicional del if--------------------------
/*
Comúnmente, los programadores principiantes confunden (=) con (==) y produce errores semánticos dificiles de encontrar.
Por ejemplo:

    main()
    {
        int a = 0;

        if (a==0)
        {
            a = 2*a+3:
        }
    }

    Se ejecuta la instucción a=2*a+3, ya que la variable a tiene el valor 0 y, por tanto, la condición (a==0) es cierta, pero
    al finalizar la ejecución del programa la variable a tendra el valor 3

    Si por error escribimos el siguiente codigo:

    main()
    {
        int a=0;

        if (a=0)
        {
            a=2*a+3;
        }
    }

    La instrucción a=2*a+3 no se ejecuta nunca, ya que la expresión a=0 asigna a la variable a el valor 0 y evalua como 
    condición la expresión a. Como la variable a tiene el valor 0, el resultado de la condición es falso. 
*/




//Omisión de llaves en las sentencias condicionales-------------------------------------------------------------------------
/*
Ejemplo:

    #include <stdio.h>
    main()
    {
        int edad;
        float entrada = 6.0;

        printf("Introduzca la edad de la persona: ");
        scanf("%d%*c", &edad);
        if (edad<18)
        {
            printf("La persona es menor de edad.\n");
            entrada=0.75*entrada;
            printf("El precio de la entrada es de %.2f euros\n", entrada);
        }
        else 
            printf("La persona es mayor de edad.\n");
            printf("No tiene descuento. Paga entrada completa\n");
    }

    En el codigo no se han utilizado las llaves en la parte del else y, sin embargo hay más de una sentencia

    Si el usuario introduce el valor 4 para la edad, el programa mostrará por pantalla los mensajes siguientes:

        La persona es menor de edad. El precio de la entrada es de 4.5 euros
        No tiene descuetno. Paga entrada completa

    Observar que el último mensaje mostrado no forma parte de las sentencias del if pero, como no se han puesto las llaves en 
    la parte del else, entonces esta sentencia se encuentra fiera del if-else. Por tal razón, la sentencia se ejecuta,
    independientemente de si la condición es cierta o no. El programa sería correcto si se pusiera las llaves en la 
    parte del else.

    Si la omisión de las llaves hubiese ocurrido en la parte del if, entonces el programa no compilaría
*/




//Uso de la variante if en lugar de la variante if-else-if---------------------------------------------------------------------
/*Es comun que programadores noveles utilicen en lugar del if-else-if, una secuencia de if consecutivos

Esta última variante puede ser correcta en códigos donde las condiciones son excluyentes, pero no es así en códigos con 
condiciones no excluyentes. Por ejemplo, dado el programa siguiente, que utiliza if-else-if: 

    #include <stdio.h>
    main()
    {
        float nota;

        printf("Introduzca su nota de FO (numero entre 0 y 10): ");
        scanf("%f%*c", &nota);
        if (nota>=9.0)
            printf("Tiene un sobresaliente");
        else if(nota>=7.0)
            printf ("Tiene un notable");
        else if(nota>=5.0)
            printf("Ha aprobado");
        else
            printf("Ha suspendido; tiene que matricularse de FO de nuevo");
    }

    Muchos programadores noveles escribirian el codigo como sigue:

    #include <stdio.h>
    int main()
    {
        float nota;

        printf("Introduzca su nota de FO (numero entre 0 y 10): ");
        scanf("%f%*c", &nota);

        if(nota>=9.0)
            printf("Tiene un sobresaliente");
        if(nota>=7.0)
            printf ("Tiene un notable");
        if(nota>=5.0)
            printf("Ha aprobado");
        else
            printf("Ha suspendido; tiene que matricularse de FO de nuevo");
    }

    Las condiciones no son excluyentes, ya que se puede cumplir más de un caso. En caso de poner 7.5 el programa muestra

        Tiene un notable
        Ha aprobado
    
    El uso de esta alternativa no genera errores de sintaxis, pero si introduce errores en la lógica del programa.
*/

//Orden lógico de las condiciones de la variante if-else-if-----------------------------------------------------------------
/*Se debe vigilar el orden lógico de las condiciones en la variante if-else-if cuando estas condiciones no son excluyentes, ya 
que puede provocar errores de ejecución
    #include <stdio.h>
    main()
    {
        float nota;

        printf("Introduzca su nota de FO (numero entre 0 y 10): ");
        scanf("%f%*c", &nota);

        if(nota>=5.0)
            printf("Ha aprobado");

        else if(nota>=7.0)
            printf ("Tiene un notable");

        else if (nota>=9.0)
            printf("Tiene un sobresaliente");
        
        else
            printf("Ha suspendido; tiene que matricularse de FO de nuevo");
    }

    Observar que si introduce 9.4 el programa muestra ha aprobado en lugar de mostrar tiene un sobresaliente.
    Esto ocurre porque en la primera sentencia el valor de 9.4 es verdadero y no se ejecutan el resto de funciones,
    por tanto, a la hora de escribir los programas, hay que ser cuidadosos de recordar el orden lógico en que se evalúan
    las condiciones, especialmente cuando estas no son excluyentes.

    El programa anterior se arregla si se añadade por ejemplo && para escribir

        if((nota>=5.0)&&(nota<7.0))
        ...
        ...
*/
