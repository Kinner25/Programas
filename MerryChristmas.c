#include <stdio.h>
#include <locale.h>
main(void) {
	setlocale(LC_ALL, "");
	char* pessoas[] = { "Ronaldo", "Messi", "Neymar" }, *produtostipo[] = {"chouriço", "Queijo", "Pastel de Nata"}, decisão;
	int totalprodutospessoa[3] = { 0 , 0, 0 }, produtostipototal[3] = {0 , 0, 0}, produtos, quantidade, pessoa, i;
	do
	{
        printf("Ronaldo = 0 Messi = 1 Neymar = 2\n");
	    scanf_s("%d", &pessoa);
	    getchar();
	    printf("Diz o produto Chouriço = 0 Queijo = 1 Pastel Nata = 2\n");
		scanf_s("%d", &produtos); getchar();
		printf("Quantos\n");
		scanf_s("%d", &quantidade); getchar();
		produtostipototal[produtos] = produtostipototal[produtos] + quantidade;
		totalprodutospessoa[pessoa] = totalprodutospessoa[pessoa] + quantidade;
		printf("Queres continuar?\n");
		scanf_s("%c",&decisão);
	} while (decisão != 'n');
	for (i = 0; i != 3; i++)
	{
     printf("%d - total pessoa %s \n", totalprodutospessoa[i], pessoas[i]);
	}
	for (i = 0; i != 3; i++)
	{
	printf("%d - total tipo %s\n", produtostipototal[i], produtostipo[i]);
	}
	printf("total - %d\n", produtostipototal[0] + produtostipototal[1] + produtostipototal[2]);
	return 0;
}