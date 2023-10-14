/*Dado el siguiente codigo

    #include <stdio.h>
    main()
    {
        int num;

            printf("Introduzca un numero entero: ");
        scanf("%d%*c", &num);
        if((num<=-1)||(num>=1))
        if (num=0)
            printf("Rango de representacion correcto\n");
        else
            printf("Rango de representacion incorrecto\n");    
    }

a)Indente correctamente el programa anterior*/


    #include <stdio.h>
    main()
    {
        int num;

        printf("Introduzca un numero entero: ");
        scanf("%d%*c", &num);

        if((num<=-1)||(num>=1))
            if (num=0)
                printf("Rango de representacion correcto\n");
            else
                printf("Rango de representacion incorrecto\n");    
    }

//b) Si el usuario introduce el valor -1, indique el mensaje que el programa muestra por pantalla
    /*Rango de representacion incorrecto*/

//c) Si el usuario introduce desde el teclado el valor 0, ¿cuál es el mensaje que se muestra por pantalla?
    /*No se muestra nada en pantalla*/

//d) Si en el programa se sustituye la condicion num=0 por num=2 y el usuario introduce desde el teclado el valor 2, ¿qué mensaje
//muestra el programa en pantalla?
    /*Rango de representacion correcto*/

//e) Indique qué posible error se está cometiendo en la sentencia if-else
    /*El error cometido ha sido utilizar el operador de la asignacion en lugar del operador relacional de igualdad en
    la condicion del if
    
        Se debe reemplazar = por ==*/






