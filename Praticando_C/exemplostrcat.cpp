/*Ex strcat*/

#include<stdio.h>
#include<string.h>

int main(){
	char nome[30]="Joao", sobreNome[]=" da Silva";
	
	printf("O nome do aluo e %s", strcat(nome, sobreNome));
}
