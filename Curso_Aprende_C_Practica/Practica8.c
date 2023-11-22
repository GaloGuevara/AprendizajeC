/*Escribir un programa que muestre por pantalla todos los multiplos de 3 entre 1 y 100*/
#include <stdio.h>
int main()
{
    int num = 1;

    while (num * 3 <= 100)
    {
        printf("%d\n", num * 3);
        num += 1;
    }
    return 0;
}