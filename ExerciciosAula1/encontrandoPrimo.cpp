#include<stdio.h>
#include<stdlib.h>
//Esse programa identifica se um  numero é ou não primo
int main (){
	int num;
	printf("Digite um numero: ");
	scanf("%i", &num);
	if(num%2 != 0 && num%3 != 0 && num%5 !=0 && num%7 !=0 && num%11 != 0){
		printf("O numero digitado e um numero primo");
	}
	else {
		printf("O numero digitado nao e um numero primo");
		
	}
}
