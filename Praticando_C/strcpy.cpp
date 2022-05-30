/*exemplo strcpy*/

#include<stdio.h>
#include<string.h>

int main(){
	char nome[]="Joao da Silva", aluno[50];
	strcpy(aluno, nome);
	printf("O nome do aluno e %s", aluno);
}
