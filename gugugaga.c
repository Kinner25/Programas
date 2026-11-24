#include <stdio.h>
#include <locale.h>
#include <time.h>
main(void)
{
	setlocale(LC_ALL, "");
	srand(time(NULL));
	int Lotaria[5] = { 0, 0, 0, 0, 0 }, i, guess[5] = { 0, 0, 0, 0, 0 }, certos = 0, j;

	for (i = 0; i < 5; i++)
	{
		Lotaria[i] = rand() % 49 + 1;

		for (j = 0; j < 5; j++)
		{
			if (j != i && Lotaria[i] == Lotaria[j])
			{
					Lotaria[i] = rand() % 49 + 1;
					printf("\n%d\n", Lotaria[i]);
			}
		}
		printf("\n%d\n", Lotaria[i]);
		printf("\nDiz o %dº número (1-50) ", i + 1);
		scanf_s("%d", &guess[i]);

		for (j = 0; j < 5; j++)
		{
			if (j != i && guess[i] == guess[j]) {
				printf("\njá disseste esse número diz outra vez\n", i + 1);
				scanf_s("%d", &guess[i]);
			}
		}

		if (guess[i] == Lotaria[i])
		{
			certos++;
		}
	}

	if (certos == 5)
	{
		printf("\nGanhaste 1 Milhão de bitcoin\n");
	}
	else {
		printf("\nwomp womp perdeste\n");
	}
	printf("Os números são ");
	for (i = 0; i < 5; i++) {
		printf("%d ", Lotaria[i]);
	}
	return 0;
}