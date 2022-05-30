//Recebe os dados informados em uma estrutura veiculo através das variáveis v1 e v2, calcula a média dos valores e imprime na tela

#include<stdio.h>
#include<string.h>

struct veiculo{
	char placa[8];
	char modelo[30];
	int ano;
	float valor;
};


int main(){
	struct veiculo v1, v2;
	float media;
	
	printf("*************VEICULO 1*************");
	printf("\n\nPlaca: ");
	gets(v1.placa);
	printf("\nModelo: ");
	gets(v1.modelo);
	printf("\nAno: ");
	scanf("%d", &v1.ano);
	fflush(stdin);
	printf("\nValor R$: ");
	scanf("%f", &v1.valor);
	fflush(stdin);
		
	printf("\n\n*************VEICULO 2*************");
	printf("\n\nPlaca: ");
	gets(v2.placa);
	printf("\nModelo: ");
	gets(v2.modelo);
	printf("\nAno: ");
	scanf("%d", &v2.ano);
	fflush(stdin);
	printf("\nValor R$: ");
	scanf("%f", &v2.valor);
	fflush(stdin);
	
	
	printf("\n\n*************DADOS DOS VEICULOS *************");
	
	printf("\nVeiculo 1\n Placa: %s - Modelo: %s - Ano: %d - Valor: R$%.2f", v1.placa, v1.modelo, v1.ano, v1.valor);
	printf("\nVeiculo 2\n Placa: %s - Modelo: %s - Ano: %d - Valor: R$%.2f", v2.placa, v2.modelo, v2.ano, v2.valor);



	printf("\n\n*************MEDIA*************");
	media = (v1.valor + v2.valor)/2;
	
	printf("\n\nMedia igual %.2f", media);
	
}
