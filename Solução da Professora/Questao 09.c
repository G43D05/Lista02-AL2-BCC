#include <stdio.h>

int primo(int x);

int main()
{
    int num, maior, qtd;
    scanf("%d", &num);
    qtd = 0;
    while (num != 404)
    {
        if (primo(num))
        {
            if (qtd == 0) maior = num;
            else
                if (num > maior) maior = num;
            qtd++;
        }

        scanf("%d", &num);
    }

    if (qtd == 0)
        printf("SEM PRIMOS\n");
    else
        printf("%d\n", maior);
    return 0;
}

int primo(int x)
{
    int achou, i;
    if (x <= 1) achou = 1;
    else
    {
        achou = 0;
        i = 2;
        while((i <= x/2) && (!achou))
        {
            if (x % i == 0)
                achou = 1;
            i++;
        }
    }
    return (!achou);
}
