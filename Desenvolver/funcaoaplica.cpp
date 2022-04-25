#include<stdlib.h>
#include<stdio.h>
#include<math.h>

float aplica(float pv, float j, int n)
{
	float fv = pv*pow((1+j),n);
	return fv;
}

int main(){
	float juros, capital_ini, periodo,taxaaplicacao;
	
	scanf("%f", &juros);
	scanf("%f", &capital_ini);
	scanf("%f", &periodo);
	taxaaplicacao = aplica(capital_ini, juros, periodo);
	
	printf("%f", taxaaplicacao);
}
