#include <stdio.h>
#include <locale.h>
main(void)
{
	setlocale(LC_ALL, "");
	int N1 = 0;
	do
	{
		
		printf("Dá-me um número, agora! ");
		scanf_s("%d", &N1);
		if (N1 % 2 > 0)
		{
			printf("O número é impar.\n");
		}
		else if (N1 != 0)
		{
			printf("O número é par.\n");
		}
	} while (N1 != 0);
	printf("Digitou zero vai sair do programa");
	return 0;
}