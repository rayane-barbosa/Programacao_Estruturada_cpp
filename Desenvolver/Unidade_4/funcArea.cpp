#include<stdio.h>
#include<stdlib.h>


//Exericio 1 - Funcao calcula area de um retangulo
void areaRetangulo(){

	float h, b, a;
	
	printf("Digite a base do retangulo: ");
	scanf("%f", &b);
	printf("Digite a altura do retangulo: ");
	scanf("%f", &h);
	a = (b*h);
	printf("%.2f", a);
	
}


//Exercicio 2 - Funcao calcula a area de um triangulo
void areaTriangulo(){
	float h, b, a;
	
	printf("Digite a base do triangulo: ");
	scanf("%f", &b);
	printf("Digite a altura do triangulo: ");
	scanf("%f", &h);
	a = (b*h)/2;
	printf("Area do triangulo: %.2f", a);
}

int main(){
	char escolhaFigura;
	
	printf("xxxxxxxxxxxxxxxx Calculando de area xxxxxxxxxxxxxxxx \n");
	printf("Digite R para calcular a area do Retangulo ou T para calcular a area do Triangulo: \n");
	scanf("%s", &escolhaFigura);
	if(escolhaFigura == 'R'|| escolhaFigura == 'r') {
	
	areaRetangulo();
}

	else if (escolhaFigura == 'T' || escolhaFigura == 't') {
		areaTriangulo();
		
	}
	else{
	
		printf("Nao foi possivel atender sua solicitacao \n\n");
		printf("O programa sera encerrado");
		return 0;
	}
	
}
