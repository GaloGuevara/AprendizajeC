/*Escribe un programa que pida al usuario su nota y compruebe si ha suspendido (<5),
si ha sacado un suficiente (5), un bien (6), un notable (7-8) o un
sobresaliente (9-10)*/
#include <stdio.h>
int main()
{
    float nota;
    printf("Ingresa tu nota: ");
    scanf("%f%*c", &nota);

    if (nota <= 10 && nota >= 0)
    {
        if (nota < 5)
        {
            printf("Ha suspendido");
        }
        else if (nota >= 5 && nota < 6)
        {
            printf("Ha sacado un suficiente");
        }
        else if (nota >= 6 && nota < 7)
        {
            printf("Ha sacado un bien");
        }
        else if (nota >= 7 && nota < 9)
        {
            printf("Ha sacado un notable");
        }
        else if (nota >= 9 && nota <= 10)
        {
            printf("Ha sacado un sobresaliente");
        }
    }
    else
        printf("La nota ingresada no es valida");
}