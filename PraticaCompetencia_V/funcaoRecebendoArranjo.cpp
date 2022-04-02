#include<stdio.h>
#include<stdlib.h>

void ordena(int v[], int tam){
int i, j, aux;
printf("%i", v[0]);


for(i=0;i<tam;i++){
    for(j=i;j<tam;j++){
        if(v[j]<v[i]){
            aux = v[i];
            v[i] = v[j];
            v[j] = aux;
            return;
        }
    }
}
printf("%i", v[0]);
}

int main(){
int *v, tam, i;

printf("Digite o tamanho do vetor: ");
scanf("%i", &tam);
v = (int*) malloc(tam*sizeof(int));

for(i=0;i<tam;i++){
    printf("Digite o %io. valor: ", i+1);
    scanf("%i", (v+i));
}

ordena(v,tam);

for(i=0;i<tam;i++){
    printf("%i - ", v+i);
}
}
