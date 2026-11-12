#include<stdio.h>
#include<locale.h>
main(void) {
	setlocale(LC_ALL, "");
	int i;
	char* Nomes[5] = { "Mário", "Bennedito", "Hemrique", "Alejandro", "Peixoto"};
		for (i = 4; i != -1; i--)
		{
			printf("\n %s \n", Nomes[i]);
		}
	return 0;
}