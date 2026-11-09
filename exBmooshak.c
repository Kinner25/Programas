#include<stdio.h>
int main(void) {
	int A, L, C, i=0;
	scanf("%d ", &A); scanf("%d ", &L); scanf("%d", &C);
	if (A >= 3 && A*L*C >= 50)
	{
		i++;
	}
	printf("%d\n", i);
	return 0;
}