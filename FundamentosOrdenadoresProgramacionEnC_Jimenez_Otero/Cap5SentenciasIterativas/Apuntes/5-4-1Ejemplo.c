/*Programa que muestra una sentencia iterativa que anida una sentencia condicional*/

/*
El programa siguiente calcula el valor máximo de la función f, definida como 
f(x)=x^2-3x+5, con x en el intervalo [-2,1]. El programa muestra en pantalla el 
valor máximo de la función y el valor de x en que se alcanza dicho valor.
*/

#include <stdio.h>

int main()
{
    int i, max, max_x, aux;

    max_x=-2;
    max=(max_x)*(max_x)-3*(max_x)+5;
    for ( i = -1; i <=1; i++)
    {
        aux=i*i-3*i+5;
        if (aux>max)
        {
            max=aux;
            max_x=i;
        }
    }
    printf("El valor maximo de la funcion es %d para x=%d\n", max, max_x);
    return 0;
}

