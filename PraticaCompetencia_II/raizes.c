#include<stdio.h>
#include<stdlib.h>

// equação de 2º grau ax²+bx+c=0
//esse programa solicita uma entrada por parte do usuário para as variávies, a, b e c
int main()
{
    float a, b, c, delta,
          raiz1, raiz2;
// Entrada dos dados
    printf("Informe o valor de a: ");
   	scanf("%f", &a);
   	printf("Informe o valor de b: ");
   	scanf("%f", &b);
   	printf("Informe o valor de c: ");
   	scanf("%f", &c);
   	
    if(a != 0){
        delta = (b*b) - (4*a*c); // retorna o valor de delta
      //  printf("Valor de delta = %.1f \n \n", delta);

        if(delta<0){
            printf("Nao tem raizes reais\n");
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
    }

}
