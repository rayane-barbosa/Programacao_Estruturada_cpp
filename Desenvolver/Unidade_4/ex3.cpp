#include<stdio.h>
#include<stdlib.h>



float ValidaNota(float vet[], int contador)
{
	
	int cont=0;
	for(int i=0;i<contador; i++){
	
	if(vet[contador]>10){
		return printf("Favor informar valores de 0 a 10\n\n");
		cont --;
	}
	else {
		cont++;
		return 0;
	}
}

}

int main(){
	int i, tam=0;
	float notasAlunos[100];
	
	for(i=0;i<100;i++){
		printf("Digite as notas: ");
		scanf("%f", &notasAlunos[i]);
		tam++;
		
		ValidaNota(notasAlunos, tam);
		
	
		
	}
}
