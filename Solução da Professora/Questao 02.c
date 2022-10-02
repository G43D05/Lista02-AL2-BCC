#include <stdio.h>

void piramide(int n);

int main()
{
    int n;
    scanf("%d", &n);
    piramide(n);
    return 0;
}

void piramide(int n)
{
    int i, j;
    for (i = 1; i <= n; i++)
    {
        printf("1");
        for (j = 2; j <= i; j++)
            printf(" %d", j);
        printf("\n");
    }
}
