#include <stdio.h>
#include <locale.h>

main(void)
{
	setlocale(LC_ALL, "");
	int NC = 0, NT = 0, N1 = 0;

	while (1000 > NT)
	{
		printf("Dá me o teu número a somar: ");
		scanf_s("%d", &N1);
		NT = NT + N1;
		NC = NC + 1;
	}
	float Media = NT / NC;
	printf("A média do valor acumulado é %.1f e o número de parcelas é %d", Media, NC);
	return 0;
}