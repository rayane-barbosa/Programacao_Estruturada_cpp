#include<stdio.h>
#include<stdlib.h>


//Exercicio 4 - Funcao realiza Calculo de fatorial
int fatorial(){
	int fat, num;
	
	printf("xxxxxxxxxxxxxxxxxxxx Calculando o fatorial xxxxxxxxxxxxxxxxxxxx \n\n");
	printf("Digite o numero que deseja calcular o fatorial: ");
	scanf("%d", &num);
	
	
	
	if(num == 1){
		return 0;
	}
	else if(num > 1){
		for(fat = 1; num > 1; num = num - 1){
			fat = fat * num;}
		
		printf("\nFatorial calculado: %d", fat);
		return 0;
	}
}

int main(){
	char escolha;
	
	printf("Digite F para calcular o fatorial: ");
	scanf("%s", &escolha);
	
	if(escolha == 'F' || escolha == 'f'){
	
	fatorial();
}
}
