#include <stdio.h>
#include <stdlib.h>

// Funcion factorial

int factorial (int n) {
    int i = 1;
    while (n > 1) {
        i = i * n;
        n = n - 1; // Corregido - se quito la declaracion de la variable, era redundante
    }
    return i;
}

// Funcion principal que recibe argumentos en la linea de comandos

int main (int argc, char *argv[]) {

    // Verificar si se proporcionan 2 argumentos
    if (argc != 3) { // Se considera que debe ser 3 porque en argc[0] se guarda el nombre del programa
        printf("No se proporcionaron suficientes argumentos\n");
        return 1; // Indica que el programa no se ejecuta adecuadamente y ocurre un error
    }

    // Convertir character string a int
    int n1 = atoi(argv[1]);
    int n2 = atoi(argv[2]);

    // Evaluar funcion factorial() para los argumentos ingresados
    int facn1 = factorial(n1);
    int facn2 = factorial(n2);

    // Imprimir mensaje con los resultados de los calculos
    printf("%d! = %d, %d! = %d\n", n1, facn1, n2, facn2);

    return 0;
}

