#include<stdio.h>
#include<locale.h>
#include <time.h>
main(void)
{
	setlocale(LC_ALL, "");
	srand(time(NULL));
	int N1, N2, i = 0;
	N2 = rand() % 999 + 1;
	do{
		printf("Diz um número ");
		scanf_s("%d", &N1);
		if (N1 < N2) {
			printf("O teu número é menor.\n");
		} 
		if (N1 > N2) {
			printf("O teu número é maior.\n");
		}
		i++;
	} while (N1 != N2);
	printf("Acertaste o número era %d.", N2);
	return 0;
}
