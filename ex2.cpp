#include <stdio.h>
#include <locale.h>

int main(void)
{
	setlocale(LC_ALL, "");
	int l1;
	printf("lado do quadrado: ");
	scanf_s("%d", &l1);
	float area = l1 * l1;
	printf("A área é %.1f\n", area);
	float perimetro = l1 + l1 + l1 + l1;
	printf("O perimetro é %.1f\n", perimetro);
	return 0;
}