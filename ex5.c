#include <stdio.h>
#include <locale.h>

main(void)
{
	setlocale(LC_ALL, "");
	float N1;
	printf("Nota do aluno: ");
	scanf_s("%f", &N1);

	if (N1 > 9.5) {
		printf("Aprovado");
	} else {
		printf("Reprovado");
	}
	return 0;
}