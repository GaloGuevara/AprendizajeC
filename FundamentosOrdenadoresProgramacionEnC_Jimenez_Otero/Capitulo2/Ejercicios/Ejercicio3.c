/*Considerando la declaracion y la inicialización de variables siguiente

    int i=2, j=5;
    float k=3.5;
    
Determine el valor de las expresiones siguiente:

a) (i%2)+(3*j-5)
b) i*2+j/9*3-1
c) k<5.0 && i!=3
*/
#include <stdio.h>

int main()
{
    int i=2,j=5;
    float k=3.5;

    //Literal a
    printf("El valor (i%%2)+(3*j-5) es igual a: %d\n", (i%2)+(3*j-5));

    //Literal b
    printf("El valor i*2+j/9*3-1 es igual a: %d\n", i*2+j/9*3-1);

    //Literac c
        //Al tener como resultado un booleano, se tiene un entero igual a 1 si es verdadero, y 0 si es falso
    int resultado = k<5.0 && i!=3;
    printf("El resultado es igual a: %d\n", resultado); //Mostramos el resultado si es 1 o 0

    if (resultado)
    {
        printf("El resultado es verdadero (distinton de cero)\n");
    } else {
        printf("El resultado es falso (igual a cero)\n");
    }

    return 0;
}