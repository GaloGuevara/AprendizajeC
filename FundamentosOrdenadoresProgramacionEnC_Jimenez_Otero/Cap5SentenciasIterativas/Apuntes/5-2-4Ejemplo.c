/*El programa siguiente muestra en pantalla la suma de los 20 primeros numeros naturales multiplos de 3 usando while*/

#include <stdio.h>

int main() 
{
    int elem = 1, cont = 0, suma = 0;

    while (cont < 20) 
    {
        if (elem % 3 == 0) 
        {
            suma = suma + elem;
            cont = cont + 1;
        }
        elem = elem + 1;
    }

    printf("La suma de los 20 primeros números múltiplos de 3 es %d\n", suma);

    return 0;
}
