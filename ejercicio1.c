#include <stdio.h>

/*
Ejercicio 1 - Este programa calcula los primeros 100 numeros triangulares

Ej: 0, 1, 3, 6, 10, 15, 21, ...
*/

// Funcion que calcula numeros triangulares
int numerostriangulares (int n) {
    return (n * (n + 1) / 2);
}

// Programa principal
int main () {
    int n;
    int triangular;
    n = 1;
    for (n = 1; n <= 100; n++) {
        triangular = numerostriangulares(n);
        printf("%d ", triangular);
    }
}