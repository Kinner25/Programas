#include <stdio.h>
#include <locale.h>

main(void)
{
	setlocale(LC_ALL, "");
	int N1 = 1;

	while (0 != N1)
	{
		printf("Dá me o teu número: ");
		scanf_s("%d", &N1);
		if (N1 > 0)
		{
			printf("%d é um número positivo \n", N1);
		}
		else
		{
			printf("%d é um número negativo \n", N1);
		}
	}

	printf("Digitou 0 vai sair do programa.");
	return 0;
}