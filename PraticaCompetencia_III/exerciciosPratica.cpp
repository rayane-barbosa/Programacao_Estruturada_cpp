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
						
		

/*Aproveitando os conjuntos recebidos e ordenados o segundo exerício pede que o programa realize a união entre os conjuntor,
 resultando no conjunto vetor_d*/		
						
		for(i=0; i<20; i++){
			if(i==0){
				
				vetor_d[tamd] = vetor_a[i];
					tamd ++;
			}
			else if(vetor_a[i] != vetor_d[tamd-1])
			{
				
				vetor_d[tamd] = vetor_a[i];
					tamd++;
			}
		}
		
		
		for(i=0; i<20; i++){
			teste =0;
			for(j=0;j<20;j++){
				
				if(vetor_b[i] == vetor_d[j]){
					teste =1;
				}
			}
			
			 if(teste ==0){
			 	
				vetor_d[tamd] = vetor_b[i];
					tamd ++; 
			}
		
		}
		
		// Imprime os valores do conjunto de união : vetor_d

	
		for(i=0; i<tamd; i++){
			printf("%.2f - ", vetor_d[i]);
		}
		
						

}


/*Ao executar o teste para imprimir o conjunto união vetor_d o mesmo não mostra os valores nos indices 9 e 10 */

