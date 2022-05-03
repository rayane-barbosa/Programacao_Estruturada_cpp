#include<stdio.h>
#include<stdlib.h>


int cont;
int fibonacci(int num){
	cont ++;
    printf("chamado: %d \n", cont);
	
	if(num==0) return 0;
	
	else if (num==1) return 1;
	else 
		
		return fibonacci(num-1) + fibonacci(num-2);
	
		
		
		
	
}

int main(){
	fibonacci(5);
}


