#include <stdio.h>

typedef struct Produto
    {
        char nome[50];
        float preco;
        int quantidade;
    } Produto;

Produto cadastrarProduto() {
    Produto produto;
    printf("Digite o nome do produto: ");
    scanf("%s", produto.nome);
    printf("Digite o preco do produto: ");
    scanf("%f", &produto.preco);
    printf("Digite a quantidade em estoque: ");
    scanf("%d", &produto.quantidade);
    return produto;
}

int main() {
    int numero;
    float quantidadeEstoque = 0;
    
    printf("Quantos produtos voce deseja cadastrar? ");
    scanf("%d", &numero);

    if (numero > 50) {
        printf("O numero maximo de produtos e 50.\n");
        return 1;
    }

    Produto produtos[50];

    for(int i = 0; i < numero; i++) {
        printf("\nCadastro do produto %d:\n", i+1);
        produtos[i] = cadastrarProduto();
    }

    printf("\nProdutos cadastrados:\n");
    for(int i = 0; i < numero; i++) {
        printf("\nProduto %d:\n", i+1);
        printf("Nome: %s\n", produtos[i].nome);
        printf("Preco: %.2f\n", produtos[i].preco);
        printf("Quantidade em estoque: %d\n", produtos[i].quantidade);
        quantidadeEstoque += produtos[i].preco * produtos[i].quantidade;
    }

    printf("\nValor total em estoque: %.2f\n", quantidadeEstoque);

    return 0;
}