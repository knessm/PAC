#include <stdio.h>

int calculaRestoMontante(int montante, int cedula)
{   
    int qtde_cedulas = montante/cedula;
    int montante_restante = montante - ( cedula * qtde_cedulas);
    printf("%d cedula de %d\n",qtde_cedulas,cedula);
    return montante_restante;
}

void caculaCedulas(int montante)
{
    int montante_atual = montante;
    if(montante_atual>=200)
    {
        montante_atual = calculaRestoMontante(montante_atual,200);
    }
    if(montante_atual >= 100)
    {
        montante_atual = calculaRestoMontante(montante_atual, 100);
    }
    if(montante_atual >=50)
    {
        montante_atual = calculaRestoMontante(montante_atual, 50);
    }
    if(montante_atual >=20) 
    {
        montante_atual = calculaRestoMontante(montante_atual,20);
    }
    if(montante_atual>=10)
    {
        montante_atual = calculaRestoMontante(montante_atual,10);
    }
    if(montante_atual >= 5)
    {
        montante_atual = calculaRestoMontante(montante_atual, 5);
    }
    if(montante_atual >=2)
    {
        montante_atual = calculaRestoMontante(montante_atual, 2);
    }
    if(montante_atual >=1) 
    {
        montante_atual = calculaRestoMontante(montante_atual,1);
    }
    
}

int main()
{
    //int a = calculaRestoMontante(597,200);
    caculaCedulas(591);
    //printf("%d",a);
    return 0;
}