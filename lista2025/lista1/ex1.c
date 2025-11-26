#include <stdio.h>

int media(int a, int b)
{
    return (a+b)/2;
}

int main()
{
    int a, b;
    printf("Digite dois numeros para calcular a média deles\n");
    scanf("%d%d",&a,&b);
    printf("a media e %d",media(a,b));
    return 0;
}