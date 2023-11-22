//Cuerpo del bucle vacio

/*
No colocar el ; al final de cada sentencia que sino el programa interpreta que no hay sentencias iterativas

    for(inicializacion; comparacion; actualizacion);

    while(condicion);

Por ejemplo:
    #include <stdio.h>
    main()
    {
    int i;
    for(i=12; i>=1; i--);
        printf("%d ",i);
    }
el programa muestra solo el valor de 0 porque cambia el valor de i hasta 0 y luego acaba la iteracion for
*/

//Bucles que no finalizan

/*
Cuando una sentencia for o una sentencia while no pueden finalizar y el programa sigue sin parar

Otro ejemplo de un programa con bucle que no finaliza es:
    #include <stdio.h>
    main()
    {
    int i;
    for(i=1; i=12; i++)
        printf("%d ",i);
    }
Obsérvese que, en este caso, se ha utilizado el operador de la asignación (=) en 
la comparación del for (en lugar de un operador relacional). Este operador primero 
asigna el valor 12 a la variable i y luego evalúa el valor de i. En este caso, 
como el valor de i es distinto de 0, el lenguaje C evalúa esta expresión como 
cierta y hace que la comparación del bucle siempre sea cierta, por lo que el 
bucle no finaliza nunca. El programa muestra por pantalla: 12 12 12 12 12 12 
12 12 12 ..
*/

//Bucles que no ejecutan el cuerpo del bucle

/*
El cuerpo de un bucle no se ejecuta si la condición o la comparación en la 
estructura de control es falsa desde el inicio

Ejemplo de bucle que no ejecuta el cuerpo del bucle for:
    #include <stdio.h>
    main()
    {
    int i;
    for(i=0; i>=12; i++)
        printf("%d ",i);
    }
En este caso, la variable de control del bucle (variable i) es inicializada con el 
valor 0 y la condición (i>=12) es falsa desde el inicio, por lo que el bucle finaliza 
sin ejecutar la sentencia printf. No se ejecuta ninguna iteración del bucle. El 
programa no muestra ningún mensaje en pantalla.
*/

//Bucles que ejecutan una iteración de más o de menos

/*
En ocasiones, los programas son incorrectos porque las sentencias iterativas 
ejecutan alguna iteración de más o de menos. Por ello, se debe ser muy cuidadoso 
a la hora de decidir la condición o la comparación de las sentencias while
y for porque estas determinan el número de iteraciones. 
Ejemplo de bucle con una iteración más:
    #include <stdio.h>
    main()
    {
    int base, expo, i;
    float pot;
    printf("Introduzca la base y el exponente (separados por un espacio): ");
    scanf("%d %d%*c", &base, &expo);
    pot = 1.0;
    for(i=0; i<=expo; i++)
        pot = pot*base; 

    printf ("La potencia de %d elevado a %d es %.2f\n", base, expo, pot);
    }
El programa anterior pretende calcular la potencia baseexponente cuando el exponente 
es superior o igual a cero. Obsérvese que el programa realiza una multiplicación 
adicional de la base, ya que la cantidad de iteraciones del for es de expo+1.

A continuación, se muestran dos alternativas de la estructura de control del for
que solucionan este problema:

    for(i=1; i<=expo; i++) o for(i=0; i<expo; i++). 

Utilizando cualquiera de estas alternativas, la potencia se calcula correctamente 
ya que la cantidad de iteraciones del bucle es igual a expo.
Una fórmula general (por casos) para calcular la cantidad de iteraciones que 
realiza un bucle for es:

    − Si for(i=limite_inferior; i<=limite_superior; i++), la cantidad 
    de iteraciones es: limite_superior - limite_inferior + 1
    − Si for(i=limite_inferior; i<limite_superior; i++), la cantidad 
    de iteraciones es: (limite_superior - 1) - limite_inferior + 1
    − Si for(i=limite_superior; i>=limite_inferior; i--), la cantidad 
    de iteraciones es: limite_superior - limite_inferior + 1
    − Si for(i=limite_superior; i>limite_inferior; i--), la cantidad 
    de iteraciones es: limite_superior - (limite_inferior + 1) + 1
*/