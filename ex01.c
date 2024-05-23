#include <stdio.h>

int main() {
    
    int lista[5];
    int somatoria = 0;

    printf("Digite 5 números abaixo:\n");

    for (int i = 0; i < 5; i++){
        printf("Digite o número %d: ", i + 1);
        int valor = scanf("%d", &lista[i]);
    }

    for (int i = 0; i<5; i++){
        somatoria += lista[i];
    }

    printf("A somatoria total é: %d\n",somatoria);

}