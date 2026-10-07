#include <stdio.h>
#include <locale.h>

int main(void)
{
	setlocale(LC_ALL, "");
	int p1, p2, p3, p4;
	float media;

	printf("Primeiro número: ");
	scanf_s("%d" , &p1);
	printf("Segundo número: ");
	scanf_s("%d", &p2);
	printf("Terceiro número: ");
	scanf_s("%d", &p3);
	printf("Quarto número: ");
	scanf_s("%d", &p4);

	media = (p1 + p2 + p3 + p4) / 4.0;
	printf("Media: %.2f\n", media);
	return 0;
}