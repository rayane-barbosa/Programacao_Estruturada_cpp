#include<stdio.h>
#include<stdlib.h>
// Programa calcula valor da fun��o y = f(x)=x*a+b
int main(){
	float y, x, a, b;
	//Entrada de valores
	printf("Digite o valor de a: \n");
	scanf("%f", &a);
	printf("Digite o valor de b: \n");
	scanf("%f", &b);
//La�o de repeti��o incrementando +1 no valor de x iniciando em 1 e finalizando 10 		
	for(x=1;x<=10;x++){
		y = (a*x) + b;
		//Sa�da de valores
		printf("+-----+--------+--------+--------\n");
		printf("Valor de x:  %.2f || valor de y=f(x): %.2f \n" , x, y);
	}
}
	

