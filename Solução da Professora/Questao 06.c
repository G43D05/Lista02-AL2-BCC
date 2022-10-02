#include <stdio.h>
#include <string.h>

const int MAX = 101;

int leds(int num);

int main()
{
    int n, i, j, qtd;
    char v[MAX];

    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%s", v); getchar();

        qtd = 0;
        for (j = 0; j < strlen(v); j++)
        {
            qtd += leds(v[j] - 48);
        }
        printf("%d leds\n", qtd);
    }
    return 0;
}

int leds(int num)
{
    int aux;
    switch(num)
    {
        case 0: aux = 6; break;
        case 1: aux = 2; break;
        case 2: aux = 5; break;
        case 3: aux = 5; break;
        case 4: aux = 4; break;
        case 5: aux = 5; break;
        case 6: aux = 6; break;
        case 7: aux = 3; break;
        case 8: aux = 7; break;
        case 9: aux = 6; break;
    }
    return aux;
}
