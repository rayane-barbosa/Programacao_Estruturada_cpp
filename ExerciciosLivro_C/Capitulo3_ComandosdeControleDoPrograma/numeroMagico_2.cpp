/* Programa de números mágicos #2
	Exemplo apresentado na página 66 Cap. 3 do livro C completo e total mostrando a utilização de da escada if-else-if com alterações
*/
#include<stdio.h>
#include<stdlib.h>

/*Para esse programa é esperado que o sistema gere um número aleatório que deverá ser descoberto pelo usuário
 */
int main(){
	int magic, guess;
	
	magic = rand(); /* o sistema gera um número aleatório que fica armazenado*/
	
	do // A instrução abaixo é executada 
	{	
		printf("Adivinhe o numero magico: "); //entrada de dados
		scanf("%d", &guess);
		
		//verifica uma condição
		if(guess == magic) {
		//se a condição é respeitada o comando abaixo é executado	
		printf("**CERTO**");
		printf("\n%d e o numero magico\n", magic);
		}
		// se não o comando abaixo será executado
		else if (guess > magic)
			printf("Errado, muito alto\n\n");
		else printf("Errado, muito baixo\n\n");
		
	
	
	}
	while(guess!=magic); //verifica se o palpite será diferente do número mágico para continuar no laço
}
