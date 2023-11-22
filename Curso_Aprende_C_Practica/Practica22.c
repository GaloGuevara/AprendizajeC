/*se desea realizar un programa que permita controlar la entrada de los asistentes a un museo.
Para ello el programa irá solicitando, por cada grupo de asistentes, informacion de la hora de
acceso, el numero de personas que forman el grupo y las edades de cada una de ellas. Una vez
introducida la informacion, el programa mostrara el precio total de la entrada grupal

La informacion de la entrada se almacenara en una estructura de datos formadas por los siguientes
miembros:

    HORA DE ENTRADA
    NUMERO DE ASISTENTES
    PRECIO TOTAL

A su vez, la hora de entrada sera una estructura anidada donde se almacenara la siguiente
informacion:

    HORA
    MINUTO

La tabla de precios por persona para calcular el importe de la entrada es la siguiente:

EDAD        PRECIO DE LA ENTRADA (EUROS)
<6                      0
>=6 && <=15             5
>=16 && <=26 || >65     8
else                    10

Ademas, si el grupo esta formado por 5 o mas personas se aplicara un descuento del 10% al total.

Tras mostrar el precio se preguntara al usuario si accede al museo un grupo nuevo o no, y de haberlo
se iniciara el proceso de nuevo; en caso contrario el programa terminara la ejecucion con un mensaje
de despedida. El usuario introducira el caracter 'S' para indicar que quiere introducir los datos de
otro grupo y el caracter 'N' si quiere finalizar el programa
*/
#include <stdio.h>
#include <string.h>

int main()
{
    struct hora_entrada // estructura anidada
    {
        int hora;
        int minuto;
    };

    struct grupo // estructura principal de los grupos
    {
        struct hora_entrada horario;
        int numero_asistentes;
        float precio_total;
    };

    struct grupo e1;

    char continuar = 'S';

    while (continuar == 'S')
    {
        // Ingresar los datos del grupo
        printf("Ingrese la hora de entrada: ");
        scanf("%d%*c", &e1.horario.hora);

        printf("Ingrese el minuto de entrada: ");
        scanf("%d%*c", &e1.horario.minuto);

        printf("Ingrese el numero de asistentes: ");
        scanf("%d%*c", &e1.numero_asistentes);

        // Evaluacion de los precios
        int contador_bb = 0, contador_ninos = 0, contador_jovenes_viejos = 0, contador_adultos = 0;
        int contador_asistentes = 0;
        for (int i = 0; i < e1.numero_asistentes; i++)
        {
            int edad;
            printf("Ingrese la edad del asistente %d: ", i + 1);
            scanf("%d%*c", &edad);

            contador_asistentes += 1;

            // Comprobacion de edad y suma de contadores
            if (edad > 0 && edad < 6)
            {
                contador_bb += 1;
            }
            else if (edad >= 6 && edad <= 15)
            {
                contador_ninos += 1;
            }
            else if ((edad >= 16 && edad <= 26) || edad > 65)
            {
                contador_jovenes_viejos += 1;
            }
            else
            {
                contador_adultos += 1;
            }
        }
        // contador de precios
        e1.precio_total = contador_bb * 0 + contador_ninos * 5 + contador_jovenes_viejos * 8 + contador_adultos * 10;

        // aplicacion del descuento
        if (contador_asistentes >= 5)
        {
            printf("Se aplica un descuento :D\n");
            e1.precio_total = e1.precio_total * 0.90;
        }
        printf("La hora de ingreso es %d:%d\n", e1.horario.hora, e1.horario.minuto);
        printf("El precio total del grupo es: %.2f\n", e1.precio_total);

        // sistema de decision para continuar o no

        printf("Ingrese 'S' si desea ingresar un grupo nuevo\nIngrese 'N' si desea continuar\nIngreso: ");
        scanf("%c%*c", &continuar);
        while (continuar == '\n')
        {
            scanf("%c%*c", &continuar);
        }
    }
    printf("Hasta la proxima...\n");
    return 0;
}