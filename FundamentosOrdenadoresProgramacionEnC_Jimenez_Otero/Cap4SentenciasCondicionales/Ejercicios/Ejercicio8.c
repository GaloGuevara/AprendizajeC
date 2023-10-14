/*Dados 3 numeros enteros leidos desde el teclado, que representan, respectivamente, el dia, el mes y el año de la fecha actual,
escriba un programa en lenguaje C que muestre por pantalla la fecha del dia anterior. Supongase que la fecha introducida por 
el usuario es valida y, para simplificar la implementacion, que no hay años bisiestos.

Ejemplo de ejecucion:

    Introduzca la fecha actual (dia/mes/año): 01/03/2013 
    La fecha anterior a 01/03/2013 es: 28/02/13*/

#include <stdio.h>
int main()
{
    printf("Introduzca la fecha actual (dia/mes/año): ");
    int dia, mes, año;
    scanf("%d/%d/%d%*c", &dia, &mes, &año);
    printf("La fecha anterior a %02d/%02d/%d es: ", dia, mes, año);
    if (dia != 1)
    {
        printf("%02d/%02d/%d\n", dia-1, mes, año);
    } 
    else if (mes==1)
    {
        printf("31/12/%d\n", año-1);
    }
    else if (mes == 2 ||mes == 4 ||mes == 6 ||mes == 8 || mes ==9 ||mes ==11)
    {
        printf("31/%02d/%d\n", mes-1,año);
    }
    else if (mes == 5 || mes ==7 || mes ==10 || mes ==12)
    {
        printf("30/%02d/%d\n", mes-1, año);
    }
    else if (mes==3)
    {
        printf("28/%02d/%d\n",mes-1,año);
    }
    return 0;
}