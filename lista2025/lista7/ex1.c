#include <stdio.h>

void inicializa(int vetor[])
{
    for(int i = 0;i < 4;i++)
    {
        vetor[i] = 0;
    }
}

void exibe(int aluguel[])
{
    for(int i = 0; i < 4; i++)
    {
        printf("O carro %d foi alugado %d vezes\n",i+1,aluguel[i]);
    }
}

int main()
{
    int vetor[4];
    inicializa(vetor);
    int aluguel;
    for(int i = 0; i < 4 ; i++)
    {
        printf("Digite quantas vezes o carro %d foi alugado\n",i+1);
        scanf("%d",&aluguel);
        vetor[i] = aluguel;
    }
    exibe(vetor);
    return 0;
}