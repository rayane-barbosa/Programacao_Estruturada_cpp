#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include <math.h> 

// equação de 2º grau ax²+bx+c=0
/*O programa abaixo não solicita uma entrada do usuário e sim sorteia para as variaveis a, b e c um valor aleatório
de 0 a 9, realizando a seguir os calculos necessários para determinar as raizes da equação
*/
int main(){
	float a, b, c, delta, raiz1, raiz2;
	
	srand(time(NULL));
	
	a = rand() % 50;
	b = rand() % 50;
	c = rand() % 50;
	
	//Mostra os valores sorteados para que seja possível fazer a validação do cálculo
	printf("a = %.2f, b = %.2f, c = %.2f\n\n", a, b, c);
	
		if(a != 0){
        	delta = (b*b) - (4*a*c); // retorna o valor de delta
       printf("Valor de delta = %.1f \n \n", delta);

        if(delta<0){
            printf("\n\nNao tem raizes reais\n");
        }
        else if (delta==0){
            raiz1=(-b)/(2*a);
            printf("Possui apenas uma raiz real:%.2f \n", raiz1);
        }else{
            raiz1=(-b - sqrt(delta))/(2*a);
            raiz2=(-b + sqrt(delta))/(2*a);
            printf("Raiz 1: %.2f \n",raiz1);
            printf("Raiz 2: %.2f \n",raiz2);
        	}
    	}else{
        printf("a=0, nao e uma equacao do segundo grau\n");
        return 0; 
    }

}

