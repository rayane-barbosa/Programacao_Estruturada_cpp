/*Conectar Unidade 3 */
#include<stdio.h>
#include<stdlib.h>

int main(){
    int idades[1000], i, j, qtde, aux;
    printf("Quantas idades: ");
    scanf("%i", &qtde);
    for(i=0;i<qtde;i++){
        printf("Digite o %ia. idade:", i+1);
        scanf("%i", &idades[i]);
    }

    printf("Valores lidos: \n");
    for(i=0;i<qtde;i++){
        printf("%i - ", idades[i]);
    }

    printf("\nValores ao contrário:\n");
    for(i=qtde-1;i>=0;i--){
        printf("%i - ", idades[i]);
    }

    printf("\nValores em ordem crescente:\n");
    for(i=0;i<qtde;i++){
        for(j=i+1;j<qtde;j++){
            if(idades[j]<idades[i]){
                aux = idades[i];
                idades[i] = idades[j];
                idades[j] = aux;
            }
        }
    }

    for(i=0;i<qtde;i++){
        printf("%i - ", idades[i]);
    }


}
