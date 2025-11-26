#include <stdio.h>

float aumentoPreco(float preco_unitario)
{
    float aumento;
    printf("Digite o aumento em porcetagem do produto\n");
    scanf("%f",&aumento);
    float preco_novo = preco_unitario + (preco_unitario * aumento / 100);
    printf("O novo preco e R$%.2f",preco_novo);
    return preco_novo;
}

int main()
{
    float preco;
    printf("Digite o preco do produto\n");
    scanf("%f",&preco);
    aumentoPreco(preco);
    return 0;
}