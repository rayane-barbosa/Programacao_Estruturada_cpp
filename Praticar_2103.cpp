/*Construa uma fun��o que efetue a leitura dos elementos de um arranjo de inteiro. 
Para tanto a fun��o recebar� como par�metros um arranjo de inteiros e um inteiro indicando seu tamanho 
(seu n�mero de elementos). O tipo de retorno deve ser necessariamente void. Escreva um programa para testar esta fun��o.*/
#include<stdio.h>
#include<stdlib.h>

void LerArranjo(int v[], int tam){
	int i;
	for(i=0;i<=tam;i++){
		printf("%d", i);
}
}

int main(){
	int vetor[10], tam1;
	int arranjo;
	
	printf("Informe o tamanho do vetor: ");
	scanf("%i", &tam1);
	
	LerArranjo(vetor, tam1);
	
}
