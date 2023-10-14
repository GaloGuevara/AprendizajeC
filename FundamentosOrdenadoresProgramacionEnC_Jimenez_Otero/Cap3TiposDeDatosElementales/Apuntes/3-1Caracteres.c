/*En muchos programas, es necesario manipular caracteres. 

Un carácter representa un valor alfanumérico: letras, dígitos o caracteres numéricos, signos de puntuación, caracteres de control, etc.

Las caracteristicas de la tabla ASCII son las siguientes:

    -Se cumple que 'a' < 'b' < 'c' < ... < 'z'.
    Quiere decir que el valor numérico del carácter 'a' según la tabla ASCII es manor que el de 'b' y este menor que el de 'c', etc
    
    -Se cumple que 'A' < 'B' < 'C' < ... < 'Z'
    
    -Se cumple que '0' < '1' < '2' < ... < '9'
    
Todas las variables de tipo caracter ocupan 1 byte en la memoria.

Para declarar una variable de este tipo, se utiliza la palabra char, que se puede combinar con unsigned

char -> ASCII estandar valor numerico 0-127
unsigned char -> ASCII extendida valor numerico 0-255

Ejemplos:

    char letra; Variable que almacena cualquier caracter de la tabla ASCII estándar

    unsigned char opc; Variable que almacena cualquier caracter de la tabla ASCII extendida

OPERACIONES-----------------------------------------------

Asignacion de caracteres:
    la sentencia letra='c'; asigna el caracter c a la variable letra
    Internamente la variable letra almacena el valor numerico 99

Comparación de caracteres:
    La expresión (letra>='a'; && letra<='z') determina si la variable letra contiene una letra minuscula, comprendida entre
    'a' y la 'z'. Si se supone que letra contiene el caracter 'c' del ejemplo anterior, la expresión devolverá 1 (cierto)

Operaciones aritméticas con caracteres:
    Debido a que internamente los caracteres se representan con un valor numérico (el que le corresponde, según el código ASCII),
    se puede operar con ellos como si fueran numeros enteros y convertir un caracter en otro

    Por ejemplo:   
        Convertir el caracter almacenado en letra de minuscula a mayúscila se hace:

            letra=letra-('a'-'A');

        Donde 'a' - 'A' indica la distancia que hay en la tabla ASCII entre el caracter 'a' y el caracter 'A'.
        Como los caracteres alfabeticos son consecutivos en la tabla, la distancia entre un caracter en minuscula y 
        su correspondiente en mayuscula es constante igual a 'a'-'A' = 'b'-'B'='c'-'C'=...='z'-'Z'=32

        Si se quiere realizar la conversion contraria y convertir el caracter de mayuscula a minuscula se hace la operacion:

            letra=letra+('a'-'A');

-------------------------------------------
El especificador de formato para char y unsigned char es el mismo %c */