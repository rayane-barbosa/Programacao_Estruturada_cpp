/*Ex strcmp*/

#include<stdio.h>
#include<string.h>


int main(){
	char nome1[]="Joao da Silva", nome2[]="Maria Fernanda";
	
	if(!strcmp(nome1,nome2))
	printf("%s e igual a %s", nome1, nome2);
	else
		if(strcmp(nome1, nome2)>0)
		printf("%s vem depois de %s", nome1, nome2);
	else
		printf("%s vem depois de %s", nome2, nome1); 
		
}
