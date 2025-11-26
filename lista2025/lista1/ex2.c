#include <stdio.h>

float calculaValor(float preco_litro, float qtde_litro)
{
    printf("O preco total e de R$%.2f",preco_litro*qtde_litro);
    return preco_litro * qtde_litro;
}

int main()
{
    float preco_litro, qtde_litro;
    printf(" digite o preço do litro e a quantidade de litros\n");
    scanf("%f%f",&preco_litro,&qtde_litro);
    float total = calculaValor(preco_litro,qtde_litro);
    return 0;
}