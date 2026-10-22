#include <stdio.h>
#include <locale.h>
#include <math.h>
main(void)
{
	setlocale(LC_ALL, "");
	int	N1, i, b = 1;
	printf("Diz um número ");
	scanf_s("%d", &N1);
	for ( i = 2; i <= sqrt(N1); i++)
	{
		if (N1 % i == 0) {
			b = 0;
		}
	}
	if (!b) {
		printf("%d não é primo", N1);
	} else {
		printf("%d é primo.", N1);
	}
}