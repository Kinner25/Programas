#include<stdio.h>
main(void)
{
	int N;
	char* Animais[5] = { "Goncalo Rato", "Harlan", "Denis", "Kawai", "Pewdiepie"};
	int i;
	for (i = 0; i < 5; i++) {
     printf("%s\n", Animais[i]);
	}
	printf("O reverso e\n");
	for (i = 4; i > -1; i--) {
		printf("%s\n", Animais[i]);
	}
	return 0;
}