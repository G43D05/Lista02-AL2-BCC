#include <stdio.h>

int digitos(int x);

int main()
{
	int n;
	scanf("%d", &n);
	printf("%d\n", digitos(n));
	return 0;
}

int digitos(int x)
{
	int aux=0;
	do
	{
		x = x/10;
		aux++;
	}while (x>0);
	return aux;
}
