/*Ex getchar */
#include<stdio.h>

int main()
{
	char nome [81];
	int i=0;
	
	printf("Informe um Nome\n");
	nome[i]=getchar();
	while(i < 80 && nome[i] != '\n')
	{
		i++;
		nome[i] = getchar();
	}
	nome[i] = '\0';
	puts(nome);
}
