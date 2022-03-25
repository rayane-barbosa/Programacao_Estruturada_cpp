#include<stdio.h>
#include<stdlib.h>


//Funcao recebe Gabarito
void gabarito()
{
	
	
	char i, resposta[10];
	
	
	
	for(i=1; i<=10; i++){
		printf("Insira a resposta da %.ia questao: " , i);
		scanf("%s" , &resposta[i]);
		
			
			
	}
	
	//Imprime os resultados do questionario
	/*for(i=1; i<=10; i++){
		printf("Resposta da %.ia questao: %c \n", i, resposta[i]);
	}*/
	
}

void separaLinha()
{
	printf("\n\n\n");
}


//Funcao formulario
int formulario()
{
	int RA[50], i, count=0;
	int qtdAlunos = 50;
	char nome[50];
	char respostasQuestionario[10];
	
		for(i=1; i<=qtdAlunos; i++){
			printf("Informe o RA: ");
			scanf("%d", &RA[i]);
			count ++;
			if(RA[i]<=0)
			
				break;
				
			else {
				printf("Infome o Nome:");
				scanf("%s", &nome[i]);
				for(i=1; i<=10; i++){
				printf("Insira a resposta da %.ia questao: " , i);
				
				scanf("%s" , &respostasQuestionario[i]);
				}
	
			}
		}
		
		//Mostra os valores que foram registrados excluindo o ultimo indice por ser = ou < que 0
		
		/*for(i=1; i<=count-1; i++){
		printf("RA aluno %i: %d - ", i, RA[i]);
		printf("Nome aluno: %c \n",  nome[i]);
		    for(i=1; i<=10; i++){
		    printf("Resposta %.ia questao :  %c  -   ", i,  respostasQuestionario[i]);
	}
	
		
		}	
		
		printf("%d", count-1);*/
		
	
	
	}


//Funcao Questionario
/*void questionario()
{
	char respostasQuestionario[10], i;
		for(i=1; i<=10; i++){
		printf("Insira a resposta da %.ia questao: " , i);
		scanf("%s" , &respostasQuestionario[i]);
	
}



		for(i=1; i<=10; i++){
		printf("Resposta da %.ia questao: %c \n", i, respostasQuestionario[i]);
	}
}*/
			


int main(){
	
	int count=0;
	
	printf("Informe abaixo as respostas para criar o gabarito \n\n");
	
	gabarito();
	
	separaLinha();
	
	separaLinha();
	
	
	registro();
	
	
	separaLinha();
	
	printf("Registre abaixo as respostas do questionario: \n\n");
	
	do{
	
	questionario();
	
} while 


	
	separaLinha();
	
}
