/*Implementar um programa para corrigir provas de m�ltipla escolha. 
Cada prova possui 10 quest�es, cada uma com 4 alternativas (apenas uma correta). 
O primeiro conjunto de dados a ser lido (respostas corretas) ser� o gabarito para a corre��o da prova. 
Os demais conjuntos lidos (respostas de cada aluno) devem ser previamente identificados pelo RA do aluno. 
Se � fornecido um RA de valor zero ou negativo, sabemos que n�o existem mais alunos. Finalizada a entrada de dados dos alunos o programa dever� exibir:
o n�mero e nota de cada aluno;
a porcentagem de aprova��o, sabendo-se que a nota m�nima de aprova��o � 5.0;
a m�dia da classe;
a quantidade e os RAs dos alunos que obtiveram a maior nota (considerando empates); e
a quantidade e os RAs dos alunos que obtiveram a menor nota (considerando empates); e
Se um mesmo RA for dado 2 ou mais vezes, o programa substituir� os resultados deste aluno.*/
#include<iostream>
#include <ctype.h>


void correcao(char vet_a[], char vet_b[]){
	int i, j, acertos=0, acertosAluno[20]; 
	for(i=1; i<=10; i++){
		for(j=1;j<=10; j++){
			if(vet_a[i]==vet_b[j]){
				acertos = acertos++;
				acertosAluno[i]=acertos;
				
			}
			
		}
	}
}



int main (){
	char gabarito[10], respostaAluno[10];
	int ra[20], tam1, i,j;
	
	
	printf("Informe as respostas que ficar�o salvas no gabarito\a\n\n");
	for(i=1; i<=10;i++){
		printf("%.ia questao: ", i);
		scanf("%s" , &gabarito[i]);
		gabarito[i] = toupper(gabarito[i]);
		
		
	}
	
	/*
	for(i=1; i<=10;i++){
	printf("%.ia resposta: %c\n", i, gabarito[i]);
	}*/
	
	printf("Dados da correcao\n\n");
	for(i=1;i<=20; i++){
	printf("RA: ");
	scanf("%i", &ra[i]);
		tam1++;
		if(ra[i]<=0)
			break;
			
		else {
			for(j=1; j<=10; j++){
				printf("Insira a resposta da %.ia questao: " , j);
				fflush(stdin);
				scanf("%s" , &respostaAluno[j]);
				respostaAluno[j] = toupper(respostaAluno[j]);
				}
	
			}
		}

	}
	
	
	
	

