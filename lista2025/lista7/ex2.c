#include <stdio.h>
#define TAMANHO 4

typedef struct DadosCliente Cliente;
struct DadosCliente
{
    int numeroConta;
    float saldo;
};



int leitura(Cliente lista[],int tamanho,float *saldoMedio)
{
    int contador = 0;
     printf("Digite o numero da conta\n");
     scanf("%d",&lista[contador].numeroConta);
     
    while(lista[contador].numeroConta != 0)
    {
        printf("Digite o saldo desta conta\n");
        scanf("%f",&lista[contador].saldo);
        *saldoMedio = *saldoMedio + lista[contador].saldo;
        contador++;
        printf("Digite o numero da conta\n");
        scanf("%d",&lista[contador].numeroConta);
    }
    *saldoMedio = *saldoMedio/ (float) contador;
    return contador;
}

int main()
{
    float saldoMedio = 0;
    Cliente lista[TAMANHO];
    int qtdeCleintes = leitura(lista,TAMANHO,&saldoMedio);
    for(int i = 0; i < qtdeCleintes; i++)
    {
        printf("A conta do numero %d tem de saldo R$%.2f\n",lista[i].numeroConta,lista[i].saldo);
        if(lista[i].saldo > saldoMedio)
        {
            printf("O saldo esta acima da media\n");
        }
        else if(lista[i].saldo == saldoMedio)
        {
            printf("O saldo esta na media\n");
        }
        else
        {
            printf("O saldo esta a baixo da media\n");
        }
    }

    return 0;
}