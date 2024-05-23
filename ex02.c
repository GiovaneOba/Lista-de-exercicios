#include <stdio.h>
#include <string.h>

int main() {
    
    char palavra[255];
    int vogais = 0;

    printf("Digite uma palavra: ");
    scanf("%s", palavra);

    for (int i = 0 ; i < strlen(palavra) ; i++){
        char letra = palavra[i];
        if (letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u' || letra == 'A' || letra == 'E' || letra == 'I' || letra == 'O' || letra == 'U'){
            vogais ++;
        }
    }

    printf("Essa palavra tem %d vogais\n", vogais);

}