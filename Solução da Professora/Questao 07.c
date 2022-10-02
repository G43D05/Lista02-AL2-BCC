#include <stdio.h>

int eh_primo(int x);
int proximo_primo(int x);
int fatorial(int x);

int main()
{
    int n, i, dividendo, divisor;
    double soma = 0;
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        dividendo = fatorial(i);
        divisor = proximo_primo(i);
        soma += (double)dividendo / divisor;
        if (i > 1)
            printf(" + ");
        printf("%d!/%d", i, divisor);
    }
    if (n > 0){
        printf("\n");
    }
    printf("%.2lf\n", soma);
    return 0;
}

int eh_primo(int x)
{
    int i, achou;
    achou = 0;
    i = 2;
    while ((i <= x/2) && (!achou))
    {
        if (x % i == 0)
            achou = 1;
        i++;
    }
    return (!achou);
}

int proximo_primo(int x)
{
    int i, achou;
    achou = 0;
    i = x;
    while (!achou)
    {
        if (eh_primo(i))
            achou = 1;
        else
            i++;
    }
    return i;
}

int fatorial(int x)
{
    int i, aux;
    aux = 1;
    for (i = 2; i <= x; i++)
        aux = aux * i;
    return aux;
}
