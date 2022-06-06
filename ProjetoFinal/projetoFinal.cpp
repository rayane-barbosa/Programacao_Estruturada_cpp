/*O objetivo do projeto � desenvolver um programa que, a partir de um arquivo REMESSA,
 gera um arquivo RETORNO para cada um de seus clientes. Com esse arquivo, o cliente pode 
 efetuar seu controle particular de pagamento dos boletos, al�m do banco poder atualizar 
 o saldo na conta corrente desses seus clientes. */
 
 
 /*Regras para o desenvolvimento do programa:
 
1 - O programa deve checar se o arquivo de remessa est� no formato padr�o, 
caso n�o esteja deve ser gerado um arquivo chamado ERRO.TXT contendo o 
tipo de erro encontrado. O erro deve ter a informa��o necess�ria para que, 
quem o leia, tenha condi��es de resolver o problema.

2 - Cada arquivo de retorno cont�m os boletos referentes a um cliente, ou seja, 
se forem encontrados 10 clientes diferentes no arquivo de remessa, ser�o gerados 
10 arquivos de retorno com os boletos referentes a cada um deles. O nome do arquvio 
de retorno deve seguir o padrao:
 AAAAMMDD_CLIENTE.txt onde AAAAMMDD � a data de gera��o do retorno e CLIENTE � o c�digo do cliente obtido no arquivo de remessa.
 
 
3 -O programa n�o ter� qualquer tipo de interface com o usu�rio (qualquer opera��o deve ser passada por linha de comando). 

 */

#include<stdio.h>
#include<string.h>


struct Data{
	int ano[4], mes[2], dia[2];
	
};

struct CABECALHO{ // primeira linha do arquivo REMESSAS que ser� copiada para o arquivo RETORNO 
	int ID[1]={1};
	struct Data DATA[8];
};

struct boletoPago{//linhas de identificacao dos boletos pagos arquivo REMESSAS.txt
	int ID[1]={2}, CLIENTE[5], CONTA[6], NUM_BOLETO[8];
	struct Data DATA_VENC[8], DATA_PAGAMENTO[8];
	float VALOR_PAGO[8];
};

struct boletoPagoCliente{//linhas de identificacao dos boletos pagos arquivo RETORNO.txt
	int ID[1]={2};
	int CONTA[6], NUM_BOLETO[8];
	struct Data DATA_PAGAMENTO[8];
	float VALOR_PAGO[8];
	
};

struct linhaFinal{//�ltima linha do arquivo retorno
	int ID[1]={3};
	int TOTAL_BOLETOS[6];
	float VALOR_TOTAL[10];

};


FILE* abreArquivo(char modo, char caminho[100]){ //; Funcao abre o arquivo 
	FILE *arquivo;
	switch(modo){ // define o que ser� realizado no arquivo grava��o, leitura ou apende que � incluir conte�do ao final de um arquivo existente 
		case 'g': // modo grava��o
			arquivo = fopen(caminho,"wt");
			break;
		case 'l': // modo leitura
			arquivo = fopen(caminho, "rt");
			break;
		case 'a': //modo apende
			arquivo = fopen(caminho, "a");
			break;
			
	}
	
	
	if(arquivo==NULL);{
		printf("Erro ao abrir o arquivo.");
			return(0);
	}
	else 
		return arquivo;
		
}

void fecharArquivo(FILE* arquivo){ // Fun��o para fechar o arquivo
	fclose(arquivo);
}


int checkIDLinha(FILE* arquivo, struct CABECALHO c.ID){// Fun��o para checar se a linha 1 corresponde ao ID = 1
		// Fun��o deve ler o primeiro caracter do arquivo como string, transformar em um int e comparar se o mesmo corresponde a c.ID	
}


int checkTamanhoLinha(){ // Fun��o deve verificar se o tamanho da linha corresponde ao formato determinado usando strlen
	
}



int main(){
	FILE *arquivo;
	char linha, l, g, a;
	int i=0;
	
	
	abreArquivo(l,"remessa.txt"); // chamando a funcao abreArquivo
	//arquivo = fopen("remessa.txt", "rt");
	
	
		
	
}




