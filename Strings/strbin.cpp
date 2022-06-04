#include<stdio.h>
#include<string.h>
#include<stdlib.h>


void retBin(char *s){
	int binario[2];
	for(int i =0;s[i]; i++){
		binario[i] = atoi(s);
		}
		fflush(stdin);
		printf("%d", binario);
		
	}

int main(void){
	char s[2];
	int i;
	
	gets(s);

	retBin(s);
	
}

