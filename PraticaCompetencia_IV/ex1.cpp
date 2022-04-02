#include<stdio.h>
#include<stdlib.h>
#include <iostream>

using namespace std;


//Funcao recebe Gabarito
void gabarito()
{
	
	
	char i, resposta[10];
	
	
	
	for(i=1; i<=10; i++){
		printf("Insira a resposta da %.ia questao: " , i);
		scanf("%s" , &resposta[i]);
     	resposta[i] = toupper (resposta[i]);
		if(resposta[i] == 'A' || 
			resposta[i] == 'B' || 
          	 resposta[i] == 'C' ||
			resposta[i] == 'D'){		
				
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
{	//RA[considerando uma turma de 50 alunos]
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
				respostasQuestionario[i] = toupper(respostasQuestionario[i]);
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
	
	
typedef int (*corrigir)(int, char, char);

int correcao(int RA[],char reposta[], char respostasQuestionario[], corrigir)
{
    int i, j, l, respostasCertas=0;
    for(i=0; i<50; i++){
        for(j=0; j<10; j++){
            for(l=0; l<10; l++)
                if(respostasQuestionario[j] == reposta[l]){
                    respostasCertas++;
                }
                
        }
}

	for(i=0; i<50; i++){
        printf("RA: %d, ---- nota: %d  ", RA[i], respostasCertas);
    }
    
}

	
void menu(){
	int inicio = 1;
	int RA[50];
		
	printf("Escolha uma das opcoes para iniciar o programa \n\n");
	printf("1. Para registrar o gabarito\n");
	printf("2. Para preencher o formulário da avaliacao");
	printf("3. Para corrigir");
	scanf("%d", &inicio);
	system("cls || clear");
	
	switch(inicio){
		case 1:
			gabarito();
			break;
	
		case 2:
			formulario();
			break;
		case 3:
			correcao();
			break;
			
		default:
			printf("Digite uma opcao valida")
		}
	}
	
	
	
}
	
	
int main(){
	
	menu();
	
	
	
	
	
	
	

}


	


