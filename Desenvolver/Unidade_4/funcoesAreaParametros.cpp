#include<stdio.h>
#include<stdlib.h>

//Exercicio 1 função para calcular a area de um retangulo

float AreaRetangulo(float b, float h)
{
	float areaRetangulo;
	
	areaRetangulo = b*h;
	return areaRetangulo;
}




int main (){
	float b, h, resultado;
	
	printf("Infome a base: ");
	scanf("%f", &b);
	printf("Informe a altura: ");
	scanf("%f", &h);
	
	resultado = AreaRetangulo(b,h);
	printf("Area do retangulo: %.2f", resultado);
	
	
}
