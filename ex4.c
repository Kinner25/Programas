#include <stdio.h>
#include <locale.h>

main(void)
{
	setlocale(LC_ALL, "");
	int c1, d1, d2;
	
	printf("distância inicial: ");
	scanf_s("%d", &d1);
	printf("distância final: ");
	scanf_s("%d", &d2);
	printf("Combústivel gasto: ");
	scanf_s("%d", &c1);
	
	int D = d2 - d1;

	float C100 = (c1 * 100) / D;

	printf("O combústivel gasto em 100 km é %.1f L.", C100);

	return 0;
}