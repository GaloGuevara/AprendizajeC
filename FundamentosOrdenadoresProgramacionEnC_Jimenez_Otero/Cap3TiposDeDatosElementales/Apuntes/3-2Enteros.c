/*Se permite diferentes calificadores, por ejemplo para los enteros que sin int se puede añadir los calificadores

    short
    long
    unsingned

TAMAÑO---------------------------------------------------------------
El tipo de dato entero almacena de 2 a 8 bytes en la memoria, dependiendo de la arquitectura, del sistema operativo y del calificador
utilizado en la declaración

RANGO DE REPRESENTACIÓN---------------------------------------------
Al igual que el tamaño, el rango de representacion del tipo de dato entero depende también de la arquitectura y del calificador
utilizado en la declaracion.

Tipo elemental      Declaracion     Rango de representación     Tamaño en bytes     Especificador de formato
                    char            -128 a 127                  1                      %hhd
                    short int       -32768 a 32767              2                       %hd
                    int             -2147483648 a 2147483647    4                       %d
Entero              long int        -9223372036854775808 a      8                       %ld
                                    9223372036854775807     
                    unsigned char   0 a 255                     1                       %hhu
                    unsigned short  0 a 65535                   2                       %hu
                    int                             
                    unsigned int    0 a 4294967295              4                       %u
                    unsigned long   0 a 18446744073709551615    8                       %lu
                    int          

DECLARACION DE VARIABLES----------------------------------------------
El calificador unsigned indica que es una variable sin signo, por lo que unicamente puede almacenar valores naturales (enteros
posivos).

OPERACIONES-------------------------------------------------------------
Asignacion de enteros
    i=-1; asigna -a a la variable i
    edad=17; asigna 17 a la variable edad

Comparacion de enteros
    i!=10;              Expresion con resultado 1
    edad>=18            Expresion con resultado 0
    edad>=17&&edad<65   Expresion con resultado 1

Operaciones aritméticas
    Permite los operadores +,-,*,/,%
*/