/*El programa siguiente muestra por pantalla la suma de los 5 primeros números naturales*/

#include <stdio.h>
int main()
{
    int suma=0;
    
    for (int i = 1; i <= 5; i++)
    {
        suma=suma+i;
    }

    printf("La suma de los 5 primeros números naturales es: %d", suma);
    return 0;   

}