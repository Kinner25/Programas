#include <stdio.h>
main(void)
{
	int i;
	printf("Da me o teu numero: ");
	scanf_s("%d", &i);
		for (i = i; i != 0; i--) {
			printf("%d\n", i);
		}
}