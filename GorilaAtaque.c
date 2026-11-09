#include<stdio.h>
#include<locale.h>
main(void)
{
	setlocale(LC_ALL , "");
	char Action, SubAction;
	int hp = 100, hpgorila = 500;
	printf("A para atacar D para defender E para esquivar C para mandar o gorila para o sitio que eu cá sei.\n");
	printf("Um gorila raivoso ataca que fazes ");
	scanf_s("%c", &Action);
	getchar();
	switch (Action) {
	case 'A':
		hp = hp - 50;
		printf("Não disse que ele ataca? Levaste de esguelha -50hp. O teu hp agora é %d\n", hp);
		break;
	case'D':
		hp = hp - 40;
		printf("tentas defender-te de um gorila, a sério? O gorila atropelou-te -40hp. O teu hp agora é %d\n", hp);
		break;
	case 'E':
		printf("Boa esquivaste-te do Gorila. Ele parece confuso o que fazes? atacas A ou foges F\n");
		scanf_s("%c", &SubAction);
		getchar();
		if (SubAction == 'A')
		{
			hpgorila = hpgorila - 10;
			printf("Deste-lhe uma chapada. Ele fica mais enervado. -10hp do Gorila. O hp do Gorila agora é %d\n", hpgorila);
		}
		else {
			hp = hp - 50;
			printf("Desastas-te a correr, o gorila apanhou-te e atirou-te que nem um boneco -50hp. O teu hp agora é %d\n", hp);
		}
		break;
	case 'C':
		hp = hp - 60;
		printf("mandas-te o gorila para a casa do c#ralho, ele não parece muito feliz. Apanhas-te de graça -60hp. O teu hp agora é %d\n", hp);
		break;
	}
	return 0;
}