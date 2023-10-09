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
    } else
    {
        printf("viva");
    }
    
    
}