#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//Programa de cadastro em um frigorífico onde recebe as informações de identificação e peso dos bois

int main(){

int id_boi=1,id_maior,id_menor;
float peso_boi=1,peso_total,qtd_total,maior_boi,menor_boi=0;

//Entrada de dados se valor do id for diferente de 0 irá receber as informações, se for igual a 0 irá parar o programa

printf ("Controle De Bois \n\nColoque as informacoes abaixo");

peso_boi = menor_boi;

	while(id_boi != 0){

	printf ("\n\nCod Idetificação: ");
	scanf("%i",&id_boi);
	
		if (id_boi != 0){	

		printf ("\nPeso (kg): ");
		scanf("%f",&peso_boi);
		
			if(menor_boi == 0){
				menor_boi = peso_boi; 
				id_menor = id_boi; 
			}

		peso_total	= peso_total +	peso_boi  ;
		qtd_total	= qtd_total + 1;
		
//O programa verifica qual bois mais gordo e mais magro, peso médio dos boi
			
			if(peso_boi > maior_boi){
				maior_boi = peso_boi;
				id_maior  = id_boi;
				
			} 	else if(peso_boi < menor_boi){
					menor_boi = peso_boi;
					id_menor  = id_boi;
				}
			
				
		}
	}

//Saida: número e o peso dos bois mais gordo e mais magro, bem como o peso médio dos bois
	printf("\nCodigo do maior Boi: %i\nPeso maior Boi:%.2f\n",id_maior,maior_boi);
	printf("Codigo do menor Boi: %i\nPeso menor Boi:%.2f\n",id_menor,menor_boi);
	printf("\nPeso Medio:%.2f ",(peso_total/qtd_total));
	
}
