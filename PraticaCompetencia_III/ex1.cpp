/*No primeiro exercicio é solicitada a entrada de 2 conjuntos ordenados,
em seguida o programa deve lê-los e realizar a intersecção entre os conjuntos vetor_a e vetor_b,
criando assim um terceiro conjunto, vetor_c */

#include<stdio.h>
#include<stdlib.h>

int main (){
	int i, j, tamc =0, tamd = 0, teste;
	float vetor_a[20], vetor_b[20], vetor_c[tamc], vetor_d[tamd];
	
	//Recebe os valores do primeiro conjunto
	
	
	
	for(i=0; i<20; i++){
		printf("Digite %.io valor do  1o conjunto: ", i+1);
		scanf("%f", &vetor_a[i]);
	}
	
	
	//Imprime os valores do primeiro conjunto
	
	
	/*for(i=0; i<20; i++){
		printf("%f", vetor_a[i]);
	}*/
	
	
	//Recebe os valores do segundo conjunto
	for(i=0; i<20; i++){
		printf("Digite %.io valor do 2o conjunto: ", i+1);
		scanf("%f", &vetor_b[i]);
	}
	
	
	//Imprime os valores do segundo conjunto 
	
	
		/*for(i=0; i<20; i++){
		printf("%f", vetor_b[i]);
	}*/
	
	
	//Compara os dois conjuntos e realiza a intersecção
	
	
	for(i=0; i<20; i++){
		for(j=0; j<20; j++){
			if(vetor_a[i]== vetor_b[j]){
								if(tamc ==0){
									vetor_c[tamc] = vetor_a[i];
										tamc ++;					
									}
									else if(vetor_c[tamc-1] != vetor_a[i]) {
					
										vetor_c[tamc] = vetor_a[i];
												tamc++;
					
									}
				
								}					
			
							}
	
	
						}
						
// Imprime os valores do conjunto de intersecção : vetor_c

	
	for(i=0; i<tamc; i++){
		printf("%.2f - ", vetor_c[i]);
	}
						
		


}

