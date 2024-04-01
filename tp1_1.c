#include <stdio.h>
int main (){

    printf ("Hola mundo\n");
    int *puntero, numero=8;
    puntero=&numero;
    printf("el contenido de lo que apunta el puntero %d\n", *puntero);
    printf("lo que contine el puntero %p\n", puntero);
    printf("la direccion de memoria de la variable numero %p\n",  &numero);
    printf(" lo que contiene de dato la variable nuemro %d\n", numero);
    int tamanio = sizeof(numero);
    printf("El tamaño de la variable numero es: %d bytes\n", tamanio);
       return 0 ;
}