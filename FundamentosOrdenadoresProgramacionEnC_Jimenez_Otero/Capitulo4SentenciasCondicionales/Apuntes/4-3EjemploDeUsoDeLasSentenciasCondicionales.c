/*A continuacion se proporciona un ejemplo de programa donde es necesario utilizar sencuencias condicionales

Supóngase que se quiere hacer un programa que lea por teclado el valor numerico de un dia y un mes, y muestre
en pantalla un mensaje que indique la estacion del año a que corresponde dicha fecha. Si el usuario introduce una fecha
incorrecta, el programa muestre por pantalla el mensaje: Error!!! Fecha incorrecta

Para simplificar la implementación, supongase que todos los mese del año tienen 31 dias. Ademas, recuerdese que la 
primavera comienza el 21 de marzo, el verano el 21 de junio, el otoño el 21 de septiembre y el invierno el 21 de diciembre:*/

#include <stdio.h>
main()
{
    int dd, mm;

    printf("Introduzca dia y mes (separados por un espacio): ");
    scanf("%d %d%*c", &dd, &mm);

    if (dd>=1 && dd<=31 && mm>=1 && mm<=12)
    {
        if ((mm==3 && dd>=21)||(mm==6 && dd<21)||mm==4 || mm==5)
            printf("El %02d/%02d estamos en la estacion de primavera\n", dd, mm);
        else if((mm==6 && dd>=21)|| (mm==9 && dd<21)|| mm==7 || mm==8)
            printf("El %02d/%02d estamos en la estacion de verano\n", dd, mm);
        else if((mm==9 && dd>=21)||(mm==12 && dd<21)|| mm==10 || mm==11)
            printf("El %02d/%02d estamos en la estacion de otoño\n", dd, mm);
        else 
            printf("El %02d/%02d estamos en la estacion de invierno\n", dd, mm);
    }
    else   
        printf("Error!! Fecha incorrecta\n");
}