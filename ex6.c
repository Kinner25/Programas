#include <stdio.h>
#include <locale.h>

main(void)
{
	setlocale(LC_ALL, "");
	int N1, N2, N3;

	printf("Dá me o primeiro número: ");
	scanf_s("%d", & N1);
	printf("Dá me o segundo número: ");
	scanf_s("%d", &N2);
	printf("Dá me o terceiro número: ");
	scanf_s("%d", &N3);

	if (N2 < N1 && N1 > N3)
	{
		printf("O maior número é o primeiro que é %d \n", N1);
	}
	else
	{
		if (N1 < N2 && N2 > N3)
		{
			printf("O maior número é o segundo que é %d \n", N2);
		}
		else
		{
			printf("O maior número é o terceiro que é %d \n", N3);
		}
	}

	return 0;
}