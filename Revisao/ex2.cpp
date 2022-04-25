#include<stdio.h>
#include<stdlib.h>

int main(){
	int codigo,i, j, totalProduto=0;
	float valor, valorReajustado;
	

		printf("Informe o codigo: ");
		scanf("%d", &codigo);
		printf("valor do produto: ");
		scanf("%f", &valor);
		if(valor>=0 and valor<50.0){
			valorReajustado = valor - (valor * 0.3);
		} else if (valor>=50.0 and valor<200.0){
			valorReajustado = valor - (valor*0.2);
			
		} else if (valor>= 200.0 and valor <500.0){
			valorReajustado = valor - (valor*0.1);
		} else if (valor>= 500.0){
			valorReajustado = valor - (valor*0.05);
		} 
				
		
	
	
		printf("Codigo do produto: %i, Valor reajustado %f", codigo, valorReajustado);
	
	
}
