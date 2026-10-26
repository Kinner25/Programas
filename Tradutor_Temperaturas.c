#include<stdio.h>
#include<locale.h>
main(void)
{
	setlocale(LC_ALL, "");
	float C, F, A;
	printf("Queres C ou F? 1 para C 0 para F ");
	scanf_s("%d" , &A);
	printf("Diz a temperatura ");
	if (A) {
		scanf_s("%f", &C);
		F = (C * 1.8) + 32;
	} else {
		scanf_s("%f", &F);
		C = (F - 32) * 5 / 9;
	}
	printf("A temperatura em celsius é %.1f e a temperatura em fahrenheit é %.1f\n", C, F);
	return 0;
}