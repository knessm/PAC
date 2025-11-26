#include <stdio.h>

int conversorHoraMinuto(int hora, int minuto)
{
    return (60 * hora) + minuto;
}

int calculaDiferencaHorario(int hora_prevista, int minuto_previsto, int hora_real, int minuto_real)
{
    int tempo_real = conversorHoraMinuto(hora_real,minuto_real);
    int tempo_previsto = conversorHoraMinuto(hora_prevista,minuto_previsto);
    return (tempo_previsto - tempo_real);
}

int main()
{
    int hora_prevista, minuto_previsto, hora_real, minuto_real;
    printf("Digite a hora e minutos previstos no voo, e a real\n");
    scanf("%d%d%d%d",&hora_prevista,&minuto_previsto,&hora_real,&minuto_real);
    int tempo = calculaDiferencaHorario(hora_prevista,minuto_previsto,hora_real,minuto_real);
    printf("%d",tempo);
    return 0;
}