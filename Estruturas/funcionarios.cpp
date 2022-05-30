//Recebe os dados informados em uma estrutura funcionarios através da variável f e as imprime na tela
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct funcionario{
	int id;
	char nome[30];
	char setor[20];
	};
	
	
int main(){
	struct funcionario f;
	
	printf("ID: ");N
	scanf("%d", &f.id);
	fflush(stdin);
	printf("\nNome:");
	gets(f.nome);
	printf("\nSetor:");
	gets(f.setor);
	
	
	printf("ID: %d - Nome: %s - Setor: %s", f.id, f.nome, f.setor);
	
}	
