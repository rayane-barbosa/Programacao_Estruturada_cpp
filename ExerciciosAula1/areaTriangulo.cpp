#include<stdio.h>
#include<stdlib.h>
//Esse programa calcula a area de um triangulo após receber sua base e sua altura
int main (){
	float base, altura;
	printf("Digite a base do triangulo: ");
	scanf("%f", &base);
	printf("Digite a altura do triangulo: ");
	scanf("%f", &altura);
	float area = (base*altura)/2;
	printf("%2.f", area);
	
	}
	
	
