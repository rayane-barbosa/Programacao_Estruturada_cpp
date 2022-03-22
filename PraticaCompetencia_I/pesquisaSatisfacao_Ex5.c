#include <stdio.h>
#include <stdlib.h>


float totalizer_o,totalizer_b,totalizer_r,totalizer_u,wrong_data,total_answer;
char note;
float totalizer_o_percent,totalizer_b_percent,totalizer_r_percent,totalizer_u_percent;

void main(){
	
//	totalizer_o = 0;
//	totalizer_b = 0;	
//	totalizer_r = 0;
//	totalizer_u = 0;
//	wrong_data  = 0;	
	
	printf("Avaliacao refri \n");

	
	while(1){ // verifica se a condição é verdadeira para executar o laço
		
		printf("Digite a nota atribuida ao refri:");
		
		scanf (" %c",&note);
		
			
		note = toupper(note); //converte o que foi recebido na variavel note para letras maiusculas
//		printf("%c",note);
		
		printf("\n");
		
		if(note=='-'){break;} // faz uma pausa no programa, parando de solicitar uma entrada
		
		if(note == 'O' || note == 'B' || note== 'R' || note == 'U'){ // condição onde é verificado se as notas estão sendo informadas corretamente
	
			//condição de soma das notas atribuidas 	
			if(note == 'O'){
				totalizer_o = totalizer_o+1;
			}
			
			if(note == 'B'){
				totalizer_b = totalizer_b+1;
			}
			
			if(note == 'R'){
				totalizer_r = totalizer_r+1;
			}
			
			if(note == 'U'){
				totalizer_u = totalizer_u+1;
			}
					
		} // caso não seja um dos caracteres delimitados o programa não irá contabilizar como voto
		else{
			
			wrong_data = wrong_data + 1;
		}	
		
	}
	// contagem total de votos
	total_answer = totalizer_o+totalizer_b+totalizer_r+totalizer_u;
	
//	printf("%d",total_answer);
//calculo da porcentagem em cada voto
	totalizer_o_percent = totalizer_o*100.0/total_answer;
	totalizer_b_percent = totalizer_b*100.0/total_answer;
	totalizer_r_percent = totalizer_r*100.0/total_answer;
	totalizer_u_percent = totalizer_u*100.0/total_answer;
	//saida de valores
	printf("O total de avaliacoes como otimo foram: %.0f correspondendo a: %.2f percent \n",totalizer_o,totalizer_o_percent);
	printf("O total de avaliacoes como bom foram: %0.f correspondendo a: %.2f percent \n",totalizer_b,totalizer_b_percent);
	printf("O total de avaliacoes como regular foram: %.0f correspondendo a: %.2f percent \n",totalizer_r,totalizer_r_percent);	
	printf("O total de avaliacoes como ruim foram: %.0f correspondendo a: %.2f percent \n",totalizer_u,totalizer_u_percent);	
	
	printf("O total de avaliacoes preenchidas incorretamente: %.0f \n",wrong_data);
	// conferencia se valores de o + b > r+u
	if((totalizer_o + totalizer_b) > (totalizer_r + totalizer_u)){
		printf("a soma de respostas 'O' e 'B' eh maior");
		
	}
	else if((totalizer_o + totalizer_b) == (totalizer_r + totalizer_u)){
		printf("A soma eh igual");
		
	}
	else{
		printf("a soma de respostas 'R' e 'U' eh maior");
	}
	

}
