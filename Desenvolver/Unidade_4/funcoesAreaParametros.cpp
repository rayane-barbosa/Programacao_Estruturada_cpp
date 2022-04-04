#include<stdio.h>
#include<stdlib.h>

//Exercicio 1 função para calcular a area de um retangulo

float AreaRetangulo(float b, float h)
{
	float areaRetangulo;
	
	areaRetangulo = b*h;
	return areaRetangulo;
}


//Exercicio 2 - função para calcular a area do triangulo 
float AreaTriangulo(float b, float h)
{
	float areaTriangulo;
	
	areaTriangulo = (b*h)/2;
	return areaTriangulo;
}




int main (){
	float b, h, resultado;
	int escolhaFigura =0;
	
	printf("Informe a base:");
	scanf("%f", &b);
	printf("Informe a altura:");
	scanf("%f", &h);
	
	printf("\n\nEscolha a figura e o programa ira calcular sua área \n\n");
	printf("1. Retangulo\n");
	printf("2. Triangulo\n");
	scanf("%d", &escolhaFigura);
	
	switch(escolhaFigura){
		case 1:
			 resultado = AreaRetangulo(b,h);
			 printf("\nA area do retangulo e: %f", resultado);
			 break;
		
		case 2:
			 resultado = AreaTriangulo(b,h);
			 printf("\nA area do triangulo e: %f", resultado);
			 break;
			
	}
}
	
	
	
	
	
	
	

