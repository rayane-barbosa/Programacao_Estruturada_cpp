/* Programa de n�meros m�gicos #1 
	Exemplo apresentado na p�gina 64 Cap. 3 do livro C completo e total com altera��es
*/
#include<stdio.h>
#include<stdlib.h>

/*Para esse programa � esperado que o sistema gere um n�mero aleat�rio que dever� ser descoberto pelo usu�rio
 */
int main(){
	int magic, guess;
	
	magic = rand(); /* o sistema gera um n�mero aleat�rio que fica armazenado*/
	
	do // A instru��o abaixo � executada 
	{	
		printf("Adivinhe o numero magico: "); //entrada de dados
		scanf("%d", &guess);
		
		//verifica uma condi��o
		if(guess == magic) {
		//se a condi��o � respeitada o comando abaixo � executado	
		printf("**CERTO**");
		printf("\n%d e o numero magico\n", magic);
		}
		// se n�o o comando abaixo ser� executado
		else{
		
			printf("Errado:");
			if(guess>magic) printf("\nmuito alto\n\n");
			else printf("\nmuito baixo\n\n");
			
		}
	
	
	}
	while(guess!=magic); //verifica se o palpite ser� diferente do n�mero m�gico para continuar no la�o
}
