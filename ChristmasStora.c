#include <stdio.h>
#include <locale.h>
int main(void)
{
	setlocale(LC_ALL, "");
	char* Names[3] = { "Matheus","Lavanya","Clara" };
	char* Produtos[3] = { "Bolo","Champagne","CTCandy" };
	int i, j, Qtd[3][3], QtTotal = 0, TPes = 0;
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf("%s trouxe quantos %s\n", Names[i], Produtos[j]);
			scanf_s("%d", &Qtd[i][j]);
			QtTotal = QtTotal + Qtd[i][j];
		}
	}
		for (i = 0; i < 3; i++)
		{
			for (j = 0; j < 3; j++)
			{
				TPes = TPes + Qtd[i][j];
                Tprod = Tprod + Qtd[j][i]
 			}
			printf("A quantidade total de trazida por %s é: %i \n", Names[i], TPes);
			printf("A quantidade total trazida de %s é: %i \n",Produtos[i], Tprod);
            TPes = 0;
		}
		printf("A quantidade total de produtos é: %i \n", QtTotal);
	}
