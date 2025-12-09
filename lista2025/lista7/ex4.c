#include <stdio.h>

typedef struct structProduto {
    int cod;
    float precoUnitario;
    int qtEstoque;
} Produto;

void leProduto(Produto produtos[])
{
    printf("Digite o cod, preco e quantidade de estoque\n");
    for (int i = 0; i < 2; i++)
    {
        scanf("%d %f %d", &produtos[i].cod, &produtos[i].precoUnitario, &produtos[i].qtEstoque);
    }
}

int busca(Produto produtos[], int cod)
{
    for (int i = 0; i < 2; i++)
    {
        if (produtos[i].cod == cod)
            return i;
    }
    return -1;
}

int main()
{
    Produto produtos[2];
    int cod, indice;

    leProduto(produtos);

    printf("Digite o cod do produto que voce quer buscar (0 para sair)\n");
    scanf("%d", &cod);

    while (cod != 0)
    {
        indice = busca(produtos, cod);

        if (indice == -1)
        {
            printf("Produto nao encontrado :(\n");
        }
        else
        {
            printf("Preco: R$%.2f\n", produtos[indice].precoUnitario);
            printf("Estoque: %d unidades\n", produtos[indice].qtEstoque);
        }

        printf("\nDigite o cod do produto (0 para sair)\n");
        scanf("%d", &cod);
    }

    return 0;
}
