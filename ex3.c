#include <stdio.h>
#include <locale.h>

main(void)
{
	setlocale(LC_ALL, "");
	int L1, L2;
	printf("Base do retângulo: ");
	scanf_s("%d", &L1);
	printf("Altura do retângulo: ");
	scanf_s("%d", &L2);
	float area = L1 * L2;
	float perimetro = (L1 * 2) + (L2 * 2);
	printf("A area é %.1f e o perimetro é %.1f.", area, perimetro);
	return 0;
}