/*El programa siguiente usando while, muestra en pantalla los numeros comprendidos entre 1 y 12 en orden inverso:
12 11 10 9 8 7 6 5 4 3 2 1*/

#include <stdio.h>

int main()
{
    int num=12;
    while (num>=1)
    {
        printf("%d ", num);
        num=num-1;
    }
    return 0;
}