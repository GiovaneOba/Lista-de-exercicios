#include <stdio.h>

void multiplicar(int A[2][2], int B[2][2], int C[2][2]) {
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            C[i][j] = 0;
            for (int k = 0; k < 2; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}

void transposta(int A[2][2], int T[2][2]) {
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            T[j][i] = A[i][j];
        }
    }
}

void imprimirMatriz(int matriz[2][2]) {
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int A[2][2];
    int B[2][2];
    int C[2][2];
    int T[2][2];

    printf("Digite os elementos da matriz A (2x2):\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    printf("Digite os elementos da matriz B (2x2):\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            scanf("%d", &B[i][j]);
        }
    }

    multiplicar(A, B, C);
    printf("Resultado da multiplicacao das matrizes A e B:\n");
    imprimirMatriz(C);

    transposta(A, T);
    printf("Transposicao da matriz A:\n");
    imprimirMatriz(T);

    transposta(B, T);
    printf("Transposicao da matriz B:\n");
    imprimirMatriz(T);

    return 0;
}