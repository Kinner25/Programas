#include <stdio.h>
#include <locale.h>
main(void)
{
	setlocale(LC_ALL, "");
	float N1, N2;
	 char A;
	printf("Queres Somar, Subtrair, Multiplicar ou Dividir? (S/s/m/d) ");
	scanf_s("%c", &A);
	printf("Quais são os dois numeros ");
	scanf_s("%f", &N1);
	scanf_s("%f", &N2);
	switch (A) {
	case 'S':
		printf("%.1f + %.1f = %.1f", N1, N2, N1+N2 );
		break;
	case 's':
		printf(" % .1f - % .1f = % .1f", N1, N2, N1-N2 );
		break;
	case 'm':
		printf(" % .1f * % .1f = % .1f", N1, N2, N1 * N2);
		break;
	case 'd':
		printf(" % .1f / % .1f = % .1f", N1, N2, N1 / N2);
		break;
	}
	return 0;
}