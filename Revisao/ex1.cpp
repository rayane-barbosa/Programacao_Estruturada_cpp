#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#define dolar 4.22;

int main(){
	
	float valorReal, valorConvertido;
	
	printf("Informe o valor em reais: ");
	scanf("%f", &valorReal);
	
	valorConvertido = valorReal * dolar;
	
	printf("Valor convertido em dolares: R$ %.2f", valorConvertido);
}


