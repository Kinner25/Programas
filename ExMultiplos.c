#include <stdio.h>
#include <locale.h>
main(void)
{
	setlocale(LC_ALL, "");
	int N1;
	do {
		printf("Dá me o teu número: ");
		scanf_s("%d", &N1);
		if (N1 % 3 == 0)
		{
			printf("%d é um múltiplo de 3 \n", N1);
		}
		if (N1 % 5 == 0)
		{
			printf("%d é um múltiplo de 5 \n", N1);
		}
	} while (0 != N1);
}
