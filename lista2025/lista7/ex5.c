/*Faça um programa que inicialmente os seguintes dados dos livros do acervo de uma biblioteca: código, quantidade de exemplares existentes e quantidade de exemplares emprestados. A seguir, o programa irá permitir que sejam efetuadas várias consultas otimizadas da seguinte forma: o usuário informa o código do livro que deseja pedir emprestado e obtém como resposta:
•Livro inexistente (caso não seja encontrado)
•Livro não disponível para empréstimo
•Livro disponível para empréstimo.
Término das consultas: código do livro que deseja pedir emprestado = 0. Faça as seguintes funções:
a) ordena: recebe como parâmetro um vetor de struct, já preenchido, e a quantidade de elementos armazenados no vetor. Esta função irá ordenar os dados pelo código dos livros.
b) busca: busca binária. Recebe como parâmetro um vetor de struct já preenchido e um código a ser procurado no vetor. Esta função irá retornar -1, caso o produto não seja encontrado ou a posição onde ele foi encontrado.
c) leitura: recebe como parâmetro um vetor de struct a ser preenchido. Esta função irá ler os dados de cada livro do acervo da biblioteca, armazenando-os no vetor de struct. Considere que existem no máximo 10000 livros diferentes no acervo da biblioteca.*/

#include <stdio.h>

typedef struct _livro
{
    int cod;
    int qtExistente;
    int qtEmprestados;
} Livro;

void ordena(Livro livros[], int qt)
{
    for (int i = 0; i < qt - 1; i++)
    {
        for (int j = 0; j < qt - 1 - i; j++)
        {
            if (livros[j].cod > livros[j + 1].cod)
            {
                Livro temp = livros[j];
                livros[j] = livros[j + 1];
                livros[j + 1] = temp;
            }
        }
    }
}

int busca(Livro livros[], int qt, int cod)
{
        int inicio = 0;
        int fim = qt - 1;
        int meio;
        while (inicio <= fim) 
        {
            meio = (inicio + fim)/2;

            if(livros[meio].cod == cod)
            {
                return meio;
            }

            else if(livros[meio].cod < cod)
            {
                inicio = meio + 1;
            }

            else
            {
                fim = meio - 1;
            }
        }
    return -1;
}

void leitura(Livro livros[], int qt)
{
    for (int i = 0; i < qt; i++)
    {
        printf("Digite o cod do livro, quantidade de exemplar, e quantidade emprestados\n");
        scanf("%d%d%d", &livros[i].cod, &livros[i].qtExistente, &livros[i].qtEmprestados);
    }
}

int main()
{
    int qt;
    printf("Digite quantos livros deseja inserir\n");
    scanf("%d", &qt);
    Livro livros[qt];

    leitura(livros, qt);
    ordena(livros, qt);
    printf("Livros ordenados por cod \n");
    for (int i = 0; i < qt; i++)
    {
        printf("%d\n", livros[i].cod);
    }
    int codProcura;
    printf("Digite o cod do produto a ser buscado\n");
    scanf("%d",&codProcura);
    int codResultado = busca(livros,qt,codProcura);
    if (codResultado > -1)
        printf("Cod: %d | Existentes: %d | Emprestados: %d\n", livros[codResultado].cod, livros[codResultado].qtExistente,livros[codResultado].qtEmprestados);

    else
        printf("Produto nao encontrado");

    return 0;
}