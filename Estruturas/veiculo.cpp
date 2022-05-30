//Recebe os dados informados em uma estrutura veiculo através da variável v e as imprime na tela

#include<stdio.h>
#include<string.h>

struct veiculo{
	char placa[8];
	char modelo[30];
	int ano;
};

int main(){
	
	struct veiculo v;
	printf("Placa: ");
	gets(v.placa);
	printf("\nModelo: ");
	gets(v.modelo);
	printf("\nAno: ");
	scanf("%d", &v.ano);
	fflush(stdin);
	
	printf("\n Placa: %s - Modelo: %s - Ano: %d ", v.placa, v.modelo, v.ano);
	
	
	
	
}
