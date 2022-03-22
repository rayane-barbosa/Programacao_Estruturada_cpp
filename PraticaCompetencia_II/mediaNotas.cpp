#include<stdio.h>
#include<stdlib.h>

/*O programa abaixo recebe a quantidade de alunos e depois de acordo com a quantidade declarada
solicita as notas, imprimindo ao final a média da sala
*/
int main(){
	float nota, nota_atual, soma_nota, media;
	int i, qtd_alunos;
	
	nota=0;
	nota_atual=0;
	
	printf("Digita a quantidade de alunos: \n");
	scanf("%d", &qtd_alunos);
		
		for(i=0; i<qtd_alunos; i++){
			printf("Digite a nota:\n");
			scanf("%f", &nota );
			nota_atual = nota;
			soma_nota +=nota_atual;	
		}
		
		media = soma_nota/qtd_alunos;
		printf("Media da sala = %1.f", media);
			
}
			
