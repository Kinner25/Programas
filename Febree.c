#include <stdio.h>
main(void)
{
	float T1, T2;
	printf("Diz a primeira temperatura ");
	scanf_s("%f", &T1);
	printf("Diz a segunda temperatura ");
	scanf_s("%f", &T2);
	if (T1 < 0 || T2 < 0)
	{
		printf("Tas Morto.");
	}
	else if (T1 < 35.5 || T2 < 35.5) {
		printf("Anfibio.");
	}
	else if ((T1 > 35.5 && T1 < 37.4) && (T2 > 35.5 && T2 < 37.4)) {
		printf("Normal");
	}
	else
	{
		printf("Febre");
		if (T2 < T1)
		{
			printf("Baixou\n");
		}
		
		if (T1 == T2)
		{
			printf("Manteve\n");
		}

		if (T2 > T1)
		{
			printf("Aumentou\n");
		}
	}
	return 0;
}