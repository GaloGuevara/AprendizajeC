/*Escriba un programa que lea del teclado un numero entero comprendido entre 0 y 6. Supongase que cada uno de estos 
valores corresponde a un dia de la semana, considerando que el valor 0 corresponde al dia lunes, y asi sucesivamente.
El programa ha de mostrar en pantalla un mensaje que indique el nombre del dia de la semana correspondiente al
valor introducido. Supongase que el usuario introducira siempre un valor entero comprendido entre 0 y 6

Ejemplo de ejecucion:

    Introduzca un numero entero entre 0 y 6: 2
    El numero corresponde con el dia de la semana: Miercoles*/

#include <stdio.h>
main()
{
    printf("Introduzca un numero entero entre 0 y 6: ");
    int num;
    char *dia; //Es necesario declararlo como puntero a char, aun no veo punteros pero ya los use :D
    scanf("%d%*c",&num);
    if (num>=0 && num<=6)
    {
        if (num==0)
        {
            dia = "Lunes";
        }
        else if (num==1)
        {
            dia = "Martes";
        }
        else if (num ==2)
        {
            dia = "Miercoles";
        }
        else if (num==3)
        {
            dia = "Jueves";
        }
        else if (num==4)
        {
            dia = "Viernes";
        }
        else if (num==5)
        {
            dia = "Sabado";
        }
        else
        {
            dia = "Domingo";
        }
        printf("El numero corresponde con el dia de la semana: %s\n", dia); //especificador de formato para strings: %s
    }
    else
        printf("El numero ingresado no es valido\n");
}