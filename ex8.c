#include <stdio.h>
#include <locale.h>

main(void)
{
	setlocale(LC_ALL, "");
	int i = 0, NT = 0, N1 = 0;
	
	printf("Diz me quantos números queres somar: ");
	scanf_s("%d", &i);

	for ( i ; i > 0 ; i--)
	{
		printf("Dá me o teu número a somar: ");
		scanf_s("%d", &N1);
		NT = NT + N1;	
	}
	
	printf("O valor somado é %d", NT);
	return 0;
}
