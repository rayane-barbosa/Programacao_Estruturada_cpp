#include <iostream>
 
using namespace std;
 
int main() {
    int num, positivos;
    for(int i=0; i<6;i++){
        scanf("%d", &num);
        if(num>0){
            positivos++;
        }
    }
    printf("%d valores positivos", positivos);
    
    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
 
    return 0;
}