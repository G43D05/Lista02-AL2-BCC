#include <stdio.h>

int soma(int n)
{
    int aux = 0;
    while (n > 0)
    {
        aux = aux + n % 10;
        n = n / 10;
    }
    return aux;
}

int main()
{
    int num;
    scanf("%d", &num);
    printf("%d\n", soma(num));
    return 0;
}
