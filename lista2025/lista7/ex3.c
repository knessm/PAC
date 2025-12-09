#include <stdio.h>

typedef struct _funcionario Funcionario;
struct _funcionario
{
    int matricula;
    int cod;
    int idade;
};

void exibe(int qtFuncDepartamento[], int somaIdade[] )
{
    for(int i =0; i<11;i++)
    {
        if(qtFuncDepartamento[i]== 0)
        {
            printf("o departamento %d esta vazio\n",i+10);
        }
        else
        {
            printf("O departamento %d tem %d funcionari(s) com uma media de idade %d anos\n",i+10,qtFuncDepartamento[i], (somaIdade[i]/qtFuncDepartamento[i]));
        }
    }
}

int main()
{
    int qtFuncionario;
    printf("Digite a qunatidade de funcionarios\n");
    scanf("%d",&qtFuncionario);
    Funcionario funcionarios[qtFuncionario];
    int qtFuncDepartamento[11] = {0};
    int somaIdade[11] = {0};
    for (int i = 0; i < qtFuncionario; i++)
    {
        printf("Digite a matricula, cod do departamento e a idade do funcionario\n");
        scanf("%d%d%d",&funcionarios[i].matricula, &funcionarios[i].cod, &funcionarios[i].idade);
        qtFuncDepartamento[funcionarios[i].cod - 10]++;
        somaIdade[funcionarios[i].cod - 10] += funcionarios[i].idade;
    }
    exibe(qtFuncDepartamento,somaIdade);

    return 0;
}