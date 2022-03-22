#include<stdio.h>
#include<stdlib.h>
//Programa recebe um numero e imprime a tabuada desse numero iniciando em 1 e encerrando em 20 utilizando a repetição
int main (){
	int i, n;
	i=1;
	printf("Digite o numero para ver a tabuada: ");
	scanf("%i", &n);
	do{
    	printf("%i\n",i*n);
    	i++;
    }while(i<=20);
}

