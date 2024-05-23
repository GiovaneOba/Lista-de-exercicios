#include <stdio.h>
#include <string.h>

struct Funcionario {
    char nome[50];
    int idade;
    float salario;
};

int main() {
    FILE *arquivo;
    char opcao;
    struct Funcionario funcionario;
    char nomeBusca[50];
    int encontrado;

    arquivo = fopen("arquivo.bin", "ab+");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    do {
        printf("===============================\n");
        printf("1 Adicionar novo registro\n");
        printf("2 Listar todos os registros\n");
        printf("3 Buscar por nome\n");
        printf("0 Sair\n");
        printf("Digite um número: ");
        scanf(" %c", &opcao);

        switch (opcao) {
            case '1':
                printf("Digite o nome: ");
                scanf("%s", funcionario.nome);
                printf("Digite a idade: ");
                scanf("%d", &funcionario.idade);
                printf("Digite o salario: ");
                scanf("%f", &funcionario.salario);

                fwrite(&funcionario, sizeof(struct Funcionario), 1, arquivo);
                break;
            case '2':
                rewind(arquivo);

                printf("Listas:\n");
                while (fread(&funcionario, sizeof(struct Funcionario), 1, arquivo)) {
                    printf("Nome: %s, Idade: %d, Salario: %.2f\n", funcionario.nome, funcionario.idade, funcionario.salario);
                }
                break;
            case '3':
                encontrado = 0;

                printf("Digite o nome a ser buscado: ");
                scanf("%s", nomeBusca);

                rewind(arquivo);
                while (fread(&funcionario, sizeof(struct Funcionario), 1, arquivo)) {
                    if (strcmp(funcionario.nome, nomeBusca) == 0) {
                        printf("Nome: %s, Idade: %d, Salario: %.2f\n", funcionario.nome, funcionario.idade, funcionario.salario);
                        encontrado = 1;
                    }
                }

                if (!encontrado) {
                    printf("Nenhum funcionario encontrado com o nome %s.\n", nomeBusca);
                }
                break;
            case '0':
                printf("Saindo do programa.\n");
                break;
            default:
                printf("Opcao invalida.\n");
        }
    } while (opcao != '0');

    fclose(arquivo);

    return 0;
}
