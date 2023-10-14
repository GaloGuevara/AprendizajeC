/*El ejemplo de uso de la sección 4.4 determina la estación del año a la que pertenece una fecha leída dede el teclado. Modifique
el ejemplo anterior para que ahora no tenga que suponerse que todos los meses del año tienen 31 días. Considerese que el mes de febrero
puede tener hasta 29 dias.

Ejemplo de ejecución 1 (en negrita, los datos que el usuario introduce):
    Introduzca dia y mes (separados por un espacio): -2 3
    Error!!! Fecha incorrecta

Ejemplo de ejecución 2 (en negrita, los datos que el usuario introduce):
    Introduzca dia y mes (separados por un espacio): 31 4
    Error!!! El mes 4 no tiene 31 dias

Ejemplo de ejecución 3 (en negrita, los datos que el usuario introduce):
    Introduzca dia y mes (separados por un espacio): 1 07
    El 01/07 estamos en la estacion de verano
*/
#include <stdio.h>
int main()
{
    int dd, mm;

    printf("Introduzca dia y mes (separados por un espacio): ");
    scanf("%d %d%*c", &dd, &mm);

    if ((dd>=21 && dd<=31 && mm==3)||(dd>=1&&dd<=30&&mm==4)||(dd>=1&&dd<=31&&mm==5)||(dd>=1&&dd<21&&mm==6))
        printf("El %02d/%02d estamos en la estacion de primavera\n", dd, mm);
    else if ((dd>=21 && dd<=30 && mm==6)||(dd>=1&&dd<=31&&mm==7)||(dd>=1&&dd<=31&&mm==8)||(dd>=1&&dd<21&&mm==9))
    {
        printf("El %02d/%02d estamos en la estacion de verano\n", dd, mm);
    }
    else if ((dd>=21 && dd<=30 && mm==9)||(dd>=1&&dd<=31&&mm==10)||(dd>=1&&dd<=30&&mm==11)||(dd>=1&&dd<21&&mm==12))
    {
        printf("El %02d/%02d estamos en la estacion de otoño\n", dd, mm);
    }
    else if ((dd>=21 && dd<=31 && mm==12)||(dd>=1&&dd<=31&&mm==1)||(dd>=1&&dd<=29&&mm==2)||(dd>=1&&dd<21&&mm==3))
    {
        printf("El %02d/%02d estamos en la estacion de invierno\n", dd, mm);
    }
    else   
        printf("Error!! Fecha incorrecta\n");

    return 0;
}