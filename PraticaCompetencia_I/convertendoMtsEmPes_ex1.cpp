#include<stdio.h>
#include<stdlib.h>

//Esse programa recebe um valor em metros e faz a conversão em pés
int main(){
	float metro;
	printf("Digite a medida em metros que deseja converter em pes: ");
	scanf("%f", &metro);
	float convertido = (metro*3.315);
	printf("A medida em mts %.2f convertido em pes sera %.2f", metro, convertido);
	 
}	
