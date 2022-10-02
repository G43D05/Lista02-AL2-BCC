#include <stdio.h>
#include <math.h>

double calculo(double v, int qtd, double t)
{
    return v / ((pow(1+t, qtd) - 1) / (t * pow(1+t, qtd)));
}

int main()
{
    double valor, taxa, p;
    int qtd;

    scanf("%lf%d%lf", &valor, &qtd, &taxa);
    p = calculo(valor, qtd, taxa);
    printf("%d\n", (int)p);
    return 0;
}
