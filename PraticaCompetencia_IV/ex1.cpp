#include<stdio.h>
#include<stdlib.h>


//Funcao recebe Gabarito
void gabarito()
{
	
	
	char i, resposta[10];
	
	
	
	for(i=1; i<=10; i++){
		printf("Insira a resposta da %.ia questao: " , i);
		scanf("%s" , &resposta[i]);
		if(resposta[i] == 'A' ||  resposta[i] == 'a' ||
			resposta[i] == 'B' || resposta[i] == 'b' ||
			resposta[i] == 'C' || resposta[i] == 'c'  ||
			resposta[i] == 'D'  || resposta[i] == 'd'){		
				
			}
			else{
				printf("Opcao incorreta\n");
				i--;
			}
			
		}
	
	//Imprime os resultados do gabarito
	/*for(i=1; i<=10; i++){
		printf("Resposta da %.ia questao: %c \n", i, resposta[i]);
	}*/
	
}

void separaLinha()
{
	printf("\n\n\n");
}


//Funcao formulario
void formulario()
{
	int RA[50], i, j, count=0;
	int qtdAlunos = 50;
	/*char nome[50];*/
	char respostasQuestionario[10];
	
	
		for(i=1; i<=qtdAlunos; i++){
			printf("Informe o RA: ");
			scanf("%d", &RA[i]);
			count ++;
			if(RA[i]<=0)
			
				break;
				
			else {
				/*printf("Infome o Nome:");
				scanf("%s", &nome[i]);*/
				
				
				for(j=1; j<=10; j++){
				printf("Insira a resposta da %.ia questao: " , j);
				fflush(stdin);
				scanf("%s" , &respostasQuestionario[i]);
				}
	
			}
		}
		
		
		//Mostra os valores que foram registrados excluindo o ultimo indice por ser = ou < que 0
		
		/*for(i=1; i<=count-1; i++){
		printf("RA aluno %i: %d - ", i, RA[i]);
		printf("Nome aluno: %c \n",  nome[i]);
		
		    for(j=1; j<=10; j++){
		    printf("Resposta %.ia questao :  %c  \n   ", j,  respostasQuestionario[i]);
	}
	
		
		}	
}	
		
		printf("%d", count-1);*/
			
	}
	
	
	void corrigir(resposta[3], respostasQuestionario[3]){
		int i, respostaCerta =0;
		
		for(i=1; i<=3; i++){
			if(resposta[i] == respostasQuestionario[i]){
				respostaCerta ++;
			}
		}
		
		
		
		
		
	}
	
	
	
	
	
		


int main(){
	
	
