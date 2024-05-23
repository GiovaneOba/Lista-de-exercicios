#include <stdio.h>
#include <string.h>

void converter(char *string) {
    while (*string != '\0') {
        if (*string >= 'a' && *string <= 'z') {
            *string = *string - 32;
        }
        string++;
    }
}

int main() {
    char string[255];

    printf("Digite uma string: ");
    fgets(string, sizeof(string), stdin);

    size_t length = strlen(string);
    if (length > 0 && string[length - 1] == '\n') {
        string[length - 1] = '\0';
    }

    converter(string);

    printf("%s\n", string);

    return 0;
}