/*Escribir un programa que se utilice para calcular el precio final de venta de coches
de segunda mano de un concesionario. Para ello, el programa debe pedir al usuario que
introduzca el precio base del vehículo, el numero de kilometros y su consumo

    -Si los kilometros son inferiores a 20000 y su consumo igual o inferior a 5,
    incrementar el precio base un 20%

    -Si los kilometros son superiores a 20000 y su consumo igual o inferior a 5,
    incrementar el precio base un 10%

    -Si el consumo es superior a 5, incrementar el precio base un 5%*/
#include <stdio.h>
int main()
{
    int precio, km, consumo;
    printf("Ingrese el precio: ");
    scanf("%d", &precio);
    printf("Ingrese el kilometraje: ");
    scanf("%d", &km);
    printf("Ingrese el consumo: ");
    scanf("%d", &consumo);

    if (km < 20000 && consumo <= 5)
    {
        precio = precio * 1.2;
    }
    else if (km > 20000 && consumo <= 5)
    {
        precio = precio * 1.1;
    }
    else if (consumo > 5)
    {
        precio = precio * 1.05;
    }
    printf("El precio final es: %d", precio);
    return 0;
}