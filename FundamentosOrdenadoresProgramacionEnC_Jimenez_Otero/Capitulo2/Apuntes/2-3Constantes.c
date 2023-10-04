/*Constante literal

    -Entera en decimal: 3, -8, 201
    -Entera en binario (empieza siempre con 0b): 0b110, 0b11, 0B111101
    -Entera en hexadecimal (empieza siempre con 0x): 0x3, 0x2A, 0xf2e
    -Real: 34.6, -899.023, 0.0044
    -Carácter: "A", "d", ";"

*/

//Constante simbólica

/*Presenta un valor que puede ser consultado, pero no modificado durante la ejecución del programa*/

/*Sintaxis general para definir una constante es la siguiente.*/

#define NOM_CONS valor_cons

//Notar que después de declarar la constante simbólica no se añade ";", cosa que si se hace al declarar una variable

//Ejemplos de definición de constantes

#define FALSO 0 //Define la constante simbólica FALSO con el valor entero 0

#define PI 3.141516 //Define la constante simbólica PI con el valor real 3.141516

#define HEX_10 0xA //Define la constante simbólica HEX_10 con el valor entero hexadecimal 0xA

#define VERDAD "S" //Define la constante simbólica VERDAD con el  carácter "S"

//----------------------------------------------------------
int main()
{
    return 0;
}