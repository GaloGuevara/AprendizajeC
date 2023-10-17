/*El programa siguiente usando for, muestra en pantalla los numeros comprendidos entre 1 y 12 en orden inverso:
12 11 10 9 8 7 6 5 4 3 2 1*/
#include <stdio.h>

int main()
{
    int num = 12;
    
    for (int i = num; i >= 1; i--)
    {
        printf("%d ", i);
    }
       
    return 0;  
}