#include<stdio.h>
#include<stdlib.h>


float media(float vet[], int tam){
	float soma = 0;
	for(int i=0; i<tam; i++){
		soma+=vet[i];
	}
	
	return soma / tam;
}

float mediaAluno(float vet1[], float vet2[], int tam){
	float media = 0;
	for(int i =0; i<tam; i++){
		for(int j =0 ; j<tam; j++){
			media = (vet1[i]+vet2[j])/2;
		}
	}
		return media;
}


int main(){
	float P1[3], P2[3], P3[3], MediaN1, MediaN2;
	int i;
	for(i=0; i<3; i++){
		printf("Notas P1: ");
		scanf("%f", &P1[i]);
	}
	
	for(i=0; i<3; i++){
		printf("Notas P2: ");
		scanf("%f", &P2[i]);
	}
	
	P3[3]= mediaAluno(P1, P2, 3);
		for(i=0; i<3; i++){
		printf("%f - : ", P3[i]);
	}
	
	MediaN1 = media(P1, 3);
	printf("Media N1: %f \n", MediaN1);
	MediaN2 = media(P2, 3);
	printf("Media N2: %f ", MediaN2);
	
	
}
