/*El programa siguiente genera un error al compilarlo. 
Determine qué sentencia está generando el error y escriba correctamente el programa para que se muestre por pantalla
el mensaje b=0

#include <stdio.h>
main()
{
    int b;
    float a, c;
    a=3.8;
    c=4.5;
    b=(a+c)%4;
    printf("b = %d\n", b);
}

Utilizando únicamente la construcción cast, ¿cómo rescribiría la sentencia b=(a+c)%4; para que el programa muestre por pantalla el
mensaje b=3?
*/

//El error del programa es que los operandos del operador módulo % han de ser de tipo entero.

//En este caso, el operando (a+c) es un operando real, debido a que las variables a y c son de tipo real. Esto implica que 
// el resultado de la suma entre las variables a y c también es de tipo real (float)

//Para solucionar este error, hay que forzar explicitamente que el operando (a+c) sea de tipo entero. Esto se hace
//utilizando la construcción cast, es decir, anteponiendo (int) al operando (a+c)

#include <stdio.h>
main()
{
    int b;
    float a, c;
    a = 3.8;
    c= 4.5;
    b= (int)(a+c)%(4); //Coloco (int)
    printf("b = %d\n", b);

    //Reescribiendo el programa para que b=(a+c)%5; muestre el mensaje b=3
    b=((int)a+(int)c)%4; //Coloco (int) en cada variable
    printf("b = %d\n", b);
}

