#include <stdio.h>

float porcentagemReprovada(float qtde_aluno,float qtde_reprovados)
{
    return (qtde_reprovados/qtde_aluno) * 100;
}

int main()
{
    float qtde_aluno, qtde_reprovados;
    printf("Digite a qauntidade de alunos e qunatos foram repovados\n");
    scanf("%f%f",&qtde_aluno,&qtde_reprovados);
    printf("%.2f%% porcento reprovaram", porcentagemReprovada(qtde_aluno,qtde_reprovados));
    return 0;
}