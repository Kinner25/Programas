#include <stdio.h>
#include <locale.h>
main(void)
{
	setlocale(LC_ALL, "");
	int i, N , maior = 0, menor = 0;
	printf("quantos números queres ");
	scanf_s("%d", &i);
	for (i = i; i > 0; i--)
	{
		printf("Diz um número ");
		scanf_s("%d", &N);
		if (N < menor || menor == 0)
		{
			menor = N;
		}		
		if (N > maior)
		{
			maior = N;
		}
	}
	printf("O maior número é %d e o menor é %d.", maior, menor);
	return 0;
}