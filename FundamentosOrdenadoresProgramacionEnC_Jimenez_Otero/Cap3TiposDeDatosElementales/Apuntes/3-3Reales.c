/*Se utilizan las palabras reservadas:
    float
    double, se puede combinar con el calificador long para obtener mayor precision y rango

A continuación se indican las características del tipo de dato elemental real:

TAMAÑO:
    Ocupa de 4 a 16 bytes en la memoria, dependiendo de la arquitectura y del tipo de dato utilizado en la declaración

RANGO DE REPRESENTACIÓN:
    Depende de la arquitectura y del tipo de dato utilizado en la declaración.

    Tipo elemental      Declaración     Rango de representacion     Tamaño en bytes     Especificador de formato
                        float           +-1.1754945*10e-38          4                   %f (decimal)
                                        +-3.4028230*e38                                 %e (científica)
    Real                double          +-2.225*10e-308             8                   %lf (decimal)
                                        +- 1.798*10e308                                 %le (científica)
                        long double     +-8.4*10e-4932              16                  %Lf (decimal)
                                        +-5.9*10e4932                                   %Le(científico)

        Ejemplo para entender el especificador de formato:

            Formato decimal:
            Número 1: 123.456001
            Número 2: 0.000123
            Número 3: 0.000012

            Formato científico:
            Número 1: 1.234560e+02
            Número 2: 1.234500e-04
            Número 3: 1.230000e-05
            
DECLARACIÓN DE VARIABLES:
    Lo típico, float a; double b;

OPERACIONES:
    Las operaciones son las siguientes:

        Asignación de reales:
            a=3.50; asignas 3.50 a la variable a
            b=1.7E-300; asigna 1.7*10^{-300} a la variable b
        Comparacion de reales:
            a>=27.0 Expresión con resultado 0
            a*2>=17 || b<0

                Tomar en cuenta que los números reales no han de compararse nunca en igualdad (==) o desigualdad (!=) exacta, 
                por que rara vez se encuentran dos reales exactamente iguales.

                La comparación se realiza de la sigunente manera:

                    ((a>=7.04/2 - ERROR) && (a<= 7.04/2 + ERROR))
                
                Donde ERROR es una constante que define la precisión deseada y que podría estar definida como: 

                    #define ERROR 0.1E-02
        
        Operaciones aritméticas:
            Los operadores +,-,* y /
            
    */