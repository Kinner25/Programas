#include <stdio.h>
#include <locale.h>
main(void)
{
	setlocale(LC_ALL, "");
	int i, N1, N2;
	printf("Diz um número ");
	scanf_s("%d", &N1);
	for ( i = 1;  i <= 10 ;  i++)
	{
		N2 = N1 * i;
		printf("%d\n", N2);
	}
	return 0;
}