#include<stdio.h>
#include<stdlib.h>

int main() {
    int num, positivos=0;
    for(int i=0; i<6;i++){
        scanf("%d", &num);
        if(num>0){
            positivos++;
        }
    }
    printf("%d valores positivos", positivos);
     
}
