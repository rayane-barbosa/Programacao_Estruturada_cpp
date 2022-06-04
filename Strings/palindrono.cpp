/*Escreva uma função que
decida se uma string é ou não um palíndromo*/
#include<stdio.h>
#include<string.h>
#include<ctype.h>


void checaPalindrono(char *vet){
	char vet_inv[15];
	int valor =0;
	for(int i=0; vet[i]; i++){
		vet[i] = tolower(vet[i]);
	}	
	strcpy(vet_inv, vet);
	
	strrev(vet_inv);
	
	valor = strcmp(vet, vet_inv);
	
	if(valor==0){
		printf("\nA palavra %s e palindrona\n", vet);
	}
	else{
		 printf("\nA palavra %s nao e palindrona\n", vet);
	}
	
	
}

int main(){
	char vet[15];
	
	gets(vet);
	
	checaPalindrono(vet);
	
	
}
