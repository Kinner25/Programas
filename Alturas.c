#include <stdio.h>
#include <locale.h>
int main()
{
	setlocale(LC_ALL, "");
	int Alunos[30][2];
	int i, j, alturatotal = 0, alunosinf = 0, elementos = sizeof(Alunos) / sizeof(Alunos[0]);
	float media;
	for (i = 0; i < elementos; i++)
	{
		printf("Diz a idade e depois a altura do %dº aluno\n", i + 1);
		for (j = 0; j < 2; j++)
		{
			//j=0 Idades | j=1 Alturas
			scanf_s("%d", &Alunos[i][j]);
			getchar();
			alturatotal = alturatotal + Alunos[i][1];
		}
	}
	media = alturatotal / elementos;
	for (i = 0; i < elementos; i++) {
		j = 0;
		if (Alunos[i][j] >= 13)
		{
			j = 1;
			if (Alunos[i][j] < media)
			{
				alunosinf++;
			}
		}
	}
	printf("%d alunos têm altura inferior á média. media é %.1f", alunosinf, media);
	return 0;
}