#include<stdio.h>
#include<locale.h>
main(void) {
	setlocale(LC_ALL, "");
	int i, Numeros[10], calculo=0, soma=0;
	char chaaaaaaaato;
	for ( i = 0; i != 9; i++)
	{
		printf("diz o %dº numero", i);
		scanf_s("%d", &Numeros[i]);
	}
	printf("queres calcular quantos números negativos foram introduzidos ou queres a soma desses numeros?(c/s) ");
	getchar();
	scanf_s("%c", &chaaaaaaaato);
	if (chaaaaaaaato == 'c')
	{
		for (i = 0; i != 9; i++)
		{
			if (Numeros[i] < 0);
			calculo++;
		}
		printf("há %d numeros negativos", calculo);
	}
	if (chaaaaaaaato == 's')
	{
		for (i = 0; i != 9; i++)
		{
			if (Numeros[i] < 0);
			soma=soma + Numeros[i];
		}
	}

	return 0;
}