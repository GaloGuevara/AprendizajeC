/*Escriba un programa que pida al usuario 3 caracteres y los muestre
separados por guiones*/
#include <stdio.h>
int main()
{
    char c1, c2, c3;
    printf("Ingrese 3 caracteres: ");
    scanf("%c%c%c%*c", &c1, &c2, &c3);
    printf("%c-%c-%c", c1, c2, c3);
}