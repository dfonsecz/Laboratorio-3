#include <stdio.h>

int factorial (int n) {
    int i = 1;
    while (n > 1) {
        i = i * n;
        n = n - 1; // Corregido - se quito la declaracion de la variable, era redundante
    }
    return i;
}

int main (int argc, char *argv[]) {
    int fac4 = factorial(4);
    int fac5 = factorial(5);
    printf("4! = %d, 5! = %d\n", fac4, fac5);
    return 0;
}

