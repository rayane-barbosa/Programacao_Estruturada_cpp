#include<stdio.h>
#include<stdlib.h>
//Programa recebe 3 numeros e imprime o maior numero digitado
int main (){
	int num1, num2, num3;
	printf("Digite o primeiro numero: \n");
	scanf("%i", &num1);
	printf("Digite o segundo numero: \n");
	scanf("%i", &num2);
	printf("Digite o terceiro numero: \n");
	scanf("%i", &num3);
	
	if(num1>num2 && num1>num3){
		printf("O numero %i e o maior numero digitado", num1);
		}
	else if(num2 > num1 && num2>num3){
		printf("O numero %i e o maior numero digitado", num2);
		}
	else{
		printf("O numero %i e o maior numero digitado", num3);
		
		}
	
	
	
}
