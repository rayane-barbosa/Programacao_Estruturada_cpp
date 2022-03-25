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
	
	
	
	
	
			
}

int main(){
	gabarito();
	
}
