/*Identifique los errores en los programas siguientes y corríjalos

a)
    main()
    {
        int = a;
        5=a;
    }
    

b) 
    main()
    {
        char b;
        b = 1.0;
    } 
*/

#include <stdio.h>

int main()
{
    //Error en la sentencia de asignacion, orden incorrecto
    int a;
    a=5;

    //Error en la inicializacion de la variable b
    char b;
    b='1.0';

    return 0;
}