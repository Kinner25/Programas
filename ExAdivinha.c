#include<stdio.h>
#include<locale.h>
#include <time.h>
main(void)
{
	setlocale(LC_ALL, "");
	srand(time(NULL));
	int N1, N2;
	N2 = rand();
	do{
		printf("Diz um número ");
		scanf_s("%d", &N1);
		if (N1 < N2) {
			printf("O teu número é menor.\n");
		} 
		if (N1 > N2) {
			printf("O teu número é maior.\n");
		}
	} while (N1 != N2);
	printf("Acertaste o número era %d.", N2);
	return 0;
}