#include <stdio.h>

int main () {
    printf("Hola Mundo \n");

    int numero = 10, *p_numero;

    p_numero = &numero;

    printf("El contenido del puntero: %d\n", *p_numero);
    printf("La direccion de memoria almacenada por el puntero: %p\n", p_numero);
    printf("La direccion de la memoria de la variable: %p\n", &numero);
    printf("La direccion de memoria del puntero: %p\n", &p_numero);
    printf("El tamanio de memoria de la variable 'num' es: %zu bytes\n", sizeof(numero));
    printf("El tamanio de memoria del puntero es: %zu bytes\n", sizeof(p_numero)); 
    
    return 0;
}