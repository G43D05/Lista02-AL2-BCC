#include <stdio.h>
#include <math.h>

double distancia(int x1, int z1, int x2, int z2)
{
    double x;
    x = sqrt(pow(x1 - x2, 2) + pow(z1 - z2, 2));
    return x;
}

int main()
{
    int x, z, i;
    double d;

    char vila[3][10] = {"Hogsmeade", "Kakariko", "Solitude"};
    int coordenada[3][2] = {
                            { 34, 220},
                            {  0,   0},
                            {140, 456}
                           };

    scanf("%d%d", &x, &z);
    for (i = 0; i < 3; i++)
    {
        d = distancia(coordenada[i][0], coordenada[i][1], x, z);
        printf("Distancia para %s: %.2lf\n", vila[i], d);
    }
    return 0;
}
