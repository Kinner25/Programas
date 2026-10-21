#include <stdio.h>
#include <locale.h>
main(void)
{
	setlocale(LC_ALL, "");
	int i, N1;
	printf("Diz um número ");
	scanf_s("%d", &N1);
	for ( i = 1;  i <= 10 ;  i++)
	{
		printf("%d x %d = %d\n",N1, i, N1 * i);
	}
	return 0;
}
