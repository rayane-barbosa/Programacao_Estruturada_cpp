/*Construa uma função que efetue a leitura dos elementos de um arranjo de inteiro. 
Para tanto a função recebará como parâmetros um arranjo de inteiros e um inteiro indicando seu tamanho 
(seu número de elementos). O tipo de retorno deve ser necessariamente void. Escreva um programa para testar esta função.*/
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
