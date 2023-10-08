/*Asignar una variable o expresión de un tipo de dato determinado a una variable de otro tipo de dato diferente, lo que
da lugar a una conversión de tipos

La conversión de tipos puede ser explicita y, en este caso, se realiza utilizando la construcción cast, que consiste en indicar
explicitamente el tip de dato al cual se desea convertir una expresión

La sintáxis general es:

    (nombre del tipo deseado) expresión
    
Ejemplos:

    De carácter a entero:
    
        int num;
        char car='1'; El carácter numérico '1' tiene el valor 49 en la tabla ASCII
        
        num=car;  Conversión implícita que asigna 49 a la variable num
        
        num = (int) car;  Conversión explícita que asigna 49 a la variable num
        
        
    De entero a carácter:
    
        Un entero ocupa 4 bytes en la memoria, mientras que un carácter solo ocupa 1 byte. Asignar un entero a un carácter implica
        quedarse únicamente con 1 de los 4 bytes del entero. Por regla general, siempre nos quedamos con el byte de menor peso
        de los 4 bytes que ocupa en la memoria. Así, si el entero almacena el valor decimal 360, que en binario se representa:

            00000000 00000000 00000001 01101000

        entonces el byte de menor peso es 01101000, que en base decimal es el valor entero 104. Por tanto, cuando se asigna
        un entero a un carácter, la varible de tipo carácter almacena el byte de menor peso del entero que se le asigna

        Ejemplo:

            int num1=65;
            int num2=360;
            char letra;
            letra=num1;
            letra=(char) num2;
        
    De entero a entero de menor tamaño:

        Cuando se hace una conversión de un valor entero que se almacena en N bytes a otro de tamaño M bytes, con M<N, el entero
        de mayor tamaño se convierte en el de menor tamaño, eliminando los bytes de orden superior.

        Ejemplo:

            short num1;
            int num2=65000;
            num1=num2;
            num1=(short) num2;
        
    De entero a real:

        Cuando asignamos un valor entero a una variable de tipo real, se produce una aproximación, por defecto o por exceso, que
        deja en el real el valor representable más cercano al valor entero

        Ejemplo:

            int n1=3;
            int n2=2147483645;
            float nreal;

            nreal=n1; Conversión implicita que asigna 3.0 a la variable nreal

            nreal=(float) n1; Conversión explícita
            nreal = n2; Conversión implicita que asigna 2147483648.0

            nreal= (float) n2; Conversión explícita

        Observar que el valor entero 2147483645 no se puede representar exactamente en un float y que el valor más cercano 
        representable es 2147483648.0

    De real a entero:

            Produce un truncamiento de la parte decimanl del número real

            Ejemplo:

                int num; 
                float nreal = 16.81;

                num = nreal; Conversión implicita que asigna 16 a la variable num

    De real a real de menor tamaño:

            Cuando se quiere hacer una conversión de un valor real que se almacena en N bytes a otro de tamaño M bytes, con 
            M<N, se produce una aproximación que deja en el real de menor tamaño el valor real representable más cercano al 
            valor real de mayor tamaño

            Ejemplo:

                float n1;
                double n2= 32433.320945;

                n1=n2; Conversión implicita asigna 32433.320312
                n1=(float) n2; Conversión explícita

                En este caso, la variable n1 contiene el valor real representable más cercano al valor de n2 (en este caso 32433.320312)

                Para visualizar en pantalla hay que usar printf de la manera siguiente:

                    printf("n1=%f n2=%lf\n",n1,n2);
                
El orden ascendente de los tipos de datos es el siguiente:

    char < short < int < long int < float < double < long double

Asi por ejemplo:

    int res;
    int num=3, den=2;
    res = num/den +3.7; Asigna el valor 4 a la variable res
        */