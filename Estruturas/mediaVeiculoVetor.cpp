//Media com estrutura veiculo passando a variavel em vetor
#include<stdio.h>
#include<string.h>

struct veiculo{
	char placa[8];
	char modelo[30];
	int ano;
	float valor;
};

int main(){
	struct veiculo v[2];
	int cont;
	float soma;
	
	for(cont=0; cont<2; cont++){
		printf("Placa: ");
		gets(v[cont].placa);
		printf("\nModelo:");
		gets(v[cont].modelo);
		printf("\nAno:");
		scanf("%d", &v[cont].ano);
		fflush(stdin);
		printf("\nValor R$:");
		scanf("%f", &v[cont].valor);
		fflush(stdin);
		soma+=v[cont].valor;
		
	}
	
	printf("*******IMPRIME OS DADOS DOS VEICULOS*******");
	for(cont=0; cont<2; cont++){
		printf("\n\n %io Veiculo \nPlaca: %s - Modelo: %s - Ano: %d - Valor: %.2f", cont+1, v[cont].placa, v[cont].modelo, v[cont].ano, v[cont].valor);
		
	}
	printf("\n\nMedia: %.2f", soma/2);
	
	
}
