/*Dados los programas siguientes, indique para cada caso la salida obtenida por pantalla:*/

//a
/*
    #include <stdio.h>
    main()
    {
        int a;
        float b=3.7189;

        a=b;
        printf("a=%d\n", a );
        //Saldrá a=3
    }*/

//b
#include <stdio.h>
main()
{
    int cod; 
    char car; 

    car = 'B'; //Su codigo ASCII es 66
    cod = 75;

    printf("El codigo ASCII para la letra %c es %hdd\n", car, car); //B es 66
    printf("El codigo ASCII %d representa el caracter %c\n", cod, cod); //75 representa K
}