/*Ejecute en su ordenador el programa siguiente, escrito en C, para conocer el tamaño en bytes de todos los tipos 
elementales que utiliza su entorno de programación*/

#include <stdio.h>
main()
{
    char c;
    short s;
    int i;
    long int li;
    float f;
    double d;
    long double ld;
    unsigned char uc;
    unsigned short us;
    unsigned int ui;
    unsigned long int uli;

    printf("Size char=%lu bytes\n", sizeof(c));
    printf("Size short=%lu bytes\n", sizeof(s));
    printf("Size int=%lu bytes\n", sizeof(i));
    printf("Size long int=%lu bytes\n",sizeof(li));
    printf("Size float=%lu bytes\n",sizeof(f));
    printf("Size double=%lu bytes\n",sizeof(d));
    printf("Size long double=%lu bytes\n",sizeof(ld));
    printf("Size unsigned char=%lu bytes\n",sizeof(uc));
    printf("Size unsigned short=%lu bytes\n",sizeof(us));
    printf("Size unsigned int=%lu bytes\n",sizeof(ui));
    printf("Size unsigned long int=%lu bytes\n",sizeof(uli));
}