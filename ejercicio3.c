#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Funcion que genera una matriz binaria aleatoria
void generateMatrix(int SIZE, int matrix[][SIZE]) {
    int i, j;

    for (i = 0; i < SIZE; i++) {
        for (j = 0; j < SIZE; j++) {
            matrix[i][j] = rand() % 2;  // Generar valores binarios aleatorios (0 o 1)
        }
    }
}

// Funcion que imprime la matriz aleatoria nxn
void printMatrix(int SIZE, int matrix[][SIZE]) {
    int i, j;

    printf("Matriz:\n");
    for (i = 0; i < SIZE; i++) {
        for (j = 0; j < SIZE; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

// Funcion que encuentra el cuadrado mxm mas grande
int findLargestSquare(int SIZE, int matrix[][SIZE]) {
    int SquareSize = 1; // Variable del tamaño actual del cuadrado
    int largestSquareSize = 1; // Variable del tamaño actual 'mas grande' del cuadrado

    // Itera por las filas y columnas de la matriz, y guarda el tamaño mas grande actual de la matriz mxm
    for (int i = 1; i < SIZE - 1; i++) {
        for (int j = 1; j < SIZE - 1; j++) {
            if (matrix[i][j] == 1 && matrix[i+1][j] == 1 && matrix[i][j+1] == 1 && matrix[i+1][j+1] == 1) {
                SquareSize++;
                if (largestSquareSize <= SquareSize) {
                    largestSquareSize = SquareSize;
                }   
            }
        }
    }

    return largestSquareSize; // Regresa tamaño de la matriz mxm
}

int main(int argc, char *argv[]) {
    int SIZE;

    // Evaluar que haya por lo menos 1 argumento
    if (argc != 2) {
        SIZE = rand() % 11;  // Si no lo hay, debe asignar un valor aleatorio, menor a 10
    } else {
        SIZE = atoi(argv[1]);
    }

    // Si el tamaño indicado es menor o igual a 0, imprime un mensaje de error
    if (SIZE <= 0) {
        printf("Tamaño inválido\n");
        return 1;
    }

    srand(time(NULL));  // Semilla de rand

    int matrix[SIZE][SIZE];  // Declarar la matriz

    generateMatrix(SIZE, matrix);  // Generar la matriz

    printMatrix(SIZE, matrix);  // Imprimir la matriz

    int largestSquareSize = findLargestSquare(SIZE, matrix);  // Llama funcion para encontrar cuadrado

    printf("El tamaño del cuadrado más grande de unos es: %d x %d\n", largestSquareSize, largestSquareSize);

    return 0;
}