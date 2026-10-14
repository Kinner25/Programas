#include <stdio.h>
#include <locale.h>

main(void)
{
	setlocale(LC_ALL, "");
	int NS = 0, NT = 0, N1 = 0;
	
	printf("Diz me quantos números queres somar: ");
	scanf_s("%d", &NS);

	while (0 < NS)
	{
		printf("Dá me o teu número a somar: ");
		scanf_s("%d", &N1);
		NT = NT + N1;
		NS = NS - 1;	
	}
	
	printf("O valor somado é %d", NT);
	return 0;
}