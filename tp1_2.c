#include <stdio.h>

// 2.4 a)
int cuadradoDeUnNumero (int num) {
    return num * num;
}

// 2.4 b)
void numeroCuadrado (int num) {
    int numeroCuadrado = num * num;
    printf("El cuadrado de %d es: %d \n", num, numeroCuadrado);
}

// 2.4 d)

// NOTA: lo hago de esta forma porque la modificación dentro de la función no afecta la variable original,
// por eso usamos punteros, para poder modificar las variables globales ('a' y 'b', en este caso)

void invertir(int *a, int *b) {
    int aux = *a; // guardo el valor de 'a' original
    *a = *b;      
    *b = aux;     // 'b' toma el valor original de 'a'
}

// 2.4 e)
void orden(int *a, int *b) {
    int aux = *a;
    if (aux > *b) {
        *a = *b;
        *b = aux;
    } 
}

int main () {
    int num, a, b, opcion;

    printf("Ingrese un numero: ");
    scanf("%d", &num);

    printf("El cuadrado de %d es: %d \n", num, cuadradoDeUnNumero(num));
    numeroCuadrado(num);

    // 2.4 c)
    printf("La direccion de la variable 'num' es: %p \n", &num);
    printf("El contenido de la variable 'num' es: %d \n", num);

    printf("-----------------------------------------\n");

    do {
        printf("\nIngrese un numero para la variable 'a': ");
        scanf("%d", &a);

        printf("Ingrese un numero para la variable 'b': ");
        scanf("%d", &b);

        invertir(&a, &b);
        printf("\n***Los valores invertidos son:***\n");
        printf("El valor de 'a' es: %d y el valor de 'b' es: %d\n", a, b);

        orden(&a, &b);
        printf("\n***Los valores ordenados son:***\n");
        printf("El valor de 'a' es: %d y el valor de 'b' es: %d\n", a, b);

        printf("\n¿Desea ingresar otro par de numeros? (1 para Si, 0 para No): ");
        scanf("%d", &opcion);

    } while (opcion != 0);
    
    return 0;
}