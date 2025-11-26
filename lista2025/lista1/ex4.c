#include <stdio.h>

void dataExtensa(int qtde_dias)
{
    int dias, semana;
    if(qtde_dias >= 7)
    {
        semana = qtde_dias/7;
        if(dias % 7 != 0)
        {
            dias = qtde_dias % 7;
            printf("%d semana(s) e %d dia(s)",semana,dias);
        }
        else
        {
           printf("%d semana(s)",semana); 
        }
    }
    else
    {
        printf("%d dias",qtde_dias);
    }
}

int main()
{
    int qtde_dias;
    printf("Digite quantos dias faltam pro envento\n");
    scanf("%d",&qtde_dias);
    dataExtensa(qtde_dias);
    return 0;
}