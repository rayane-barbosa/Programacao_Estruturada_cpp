#include<iostream>
#include<stdlib.h>

float somatorio(int x){
	float s=0;
	for(int i=1; i<=50; i++){
		s=s+(x/i);
	}
	return s;
}

int main(){
	int valor_X;
	float soma;
	
	scanf("%i", &valor_X);
	soma=somatorio(valor_X);
	
	printf("%f", soma);
	
	
}
