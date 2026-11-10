#include<stdio.h>
main(void) 
{
	int N;
	char *carros[3] = {"volvo", "renault", "mercedes"};
	char S;
	do {
		printf("Que carro queres?(0/2) ");
		scanf_s("%i", &N);
		if (N < 0 || N > 2)
			printf("Número inválido\n");
		else
			printf("%s", carros[N]);
		printf("Queres continuar?(s/n)");
		getchar();
		scanf_s("%c", &S);
	} while (S != 'n');
	return 0;
}