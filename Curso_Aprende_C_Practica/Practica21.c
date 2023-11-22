/*se desea realizar un programa que almacene la informacion de un motor de combustion
interna y posteriormente muestre la cilindrada de dicho motor en CV. La informacion
del motor se almacenará en una estructura con los siguientes miembros y tipos de
datos:

IDENTIFICADOR DEL MOTOR: valor numerico que identifica el motor de forma unica
CILINDRO: estructura de datos anidada
NUMERO DE CILINDROS: numero entero que indica el numero de cilindros del motor
CILINDRADA: numero real que se calculará en el programa

a su vez, cilindro será una estructura anidada que conste de los siguientes miembros:

DIAMETRO: numero real en mm
CARRERA: numero real en mm

la informacion del cilindro se almacenara en milimetros. El programa pedira los datos
del motor al usuario y calculara la cilindrada, que almanacerá en la misma estructura
de datos, según la siguiente formula:

    v_c=(N*C*PI*D^2)/4

Donde N representa el numero de clindros
C representa la carrera del cilindro en cm
D el diametro del cilindro en cm
PI tiene su valor definido en la libreria math.h como M.PI

CUIDADO CON LAS UNIDADES DE MEDIDA

Finalmente, se mostrarán todos los datos introducidos por el usuario y la cilindrada del motor*/

#include <stdio.h>
#include <string.h>
#define _USE_MATH_DEFINES // for C
#include <math.h>

int main()
{
    struct cilindro
    {
        float diametro;
        float carrera;
    };

    struct motor
    {
        long int id;
        struct cilindro cilindro_motor;
        int ncilindros;
        float cilindrada;
    };

    struct motor motor1;

    printf("Ingrese el identificador numerico del motor: ");
    scanf("%ld", &motor1.id); // registrar id del motor

    printf("Ingrese el diametro del cilindro en milimetros: ");
    scanf("%f", &motor1.cilindro_motor.diametro); // registras diametro cilindro en mm

    printf("Ingrese la carrera del cilindro en mm: ");
    scanf("%f", &motor1.cilindro_motor.carrera); // registras la carrera del cilindro en mm

    printf("Ingrese el numero de cilindros del motor: ");
    scanf("%d%*c", &motor1.ncilindros); // registras el numero de cilindros del motor

    motor1.cilindrada = (motor1.ncilindros * (motor1.cilindro_motor.carrera / 10) * M_PI * pow(motor1.cilindro_motor.diametro / 10, 2)) / 4; // Calculo de la cilindrada del motor

    // Mostrar datos en pantalla
    printf("Los datos ingresados son:\nID del cilindro: %ld\nDiametro del cilindro en mm: %.2f\nCarrera del cilindro en mm: %.2f\nEl numero de cilindros: %d\nLa cilindrada es: %.2f\n", motor1.id, motor1.cilindro_motor.diametro, motor1.cilindro_motor.carrera, motor1.ncilindros, motor1.cilindrada);
}