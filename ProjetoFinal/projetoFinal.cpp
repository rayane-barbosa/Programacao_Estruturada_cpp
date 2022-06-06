/*O objetivo do projeto é desenvolver um programa que, a partir de um arquivo REMESSA,
 gera um arquivo RETORNO para cada um de seus clientes. Com esse arquivo, o cliente pode 
 efetuar seu controle particular de pagamento dos boletos, além do banco poder atualizar 
 o saldo na conta corrente desses seus clientes. */
 
 
 /*Regras para o desenvolvimento do programa:
 
1 - O programa deve checar se o arquivo de remessa está no formato padrão, 
caso não esteja deve ser gerado um arquivo chamado ERRO.TXT contendo o 
tipo de erro encontrado. O erro deve ter a informação necessária para que, 
quem o leia, tenha condições de resolver o problema.

2 - Cada arquivo de retorno contém os boletos referentes a um cliente, ou seja, 
se forem encontrados 10 clientes diferentes no arquivo de remessa, serão gerados 
10 arquivos de retorno com os boletos referentes a cada um deles. O nome do arquvio 
de retorno deve seguir o padrao:
 AAAAMMDD_CLIENTE.txt onde AAAAMMDD é a data de geração do retorno e CLIENTE é o código do cliente obtido no arquivo de remessa.
 
 
3 -O programa não terá qualquer tipo de interface com o usuário (qualquer operação deve ser passada por linha de comando). 

 */

#include<stdio.h>
#include<string.h>


struct Data{
	int ano[4], mes[2], dia[2];
	
};

struct CABECALHO{ // primeira linha do arquivo REMESSAS que será copiada para o arquivo RETORNO 
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

struct linhaFinal{//última linha do arquivo retorno
	int ID[1]={3};
	int TOTAL_BOLETOS[6];
	float VALOR_TOTAL[10];

};


FILE* abreArquivo(char modo, char caminho[100]){ //; Funcao abre o arquivo 
	FILE *arquivo;
	switch(modo){ // define o que será realizado no arquivo gravação, leitura ou apende que é incluir conteúdo ao final de um arquivo existente 
		case 'g': // modo gravação
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

void fecharArquivo(FILE* arquivo){ // Função para fechar o arquivo
	fclose(arquivo);
}


int checkIDLinha(FILE* arquivo, struct CABECALHO c.ID){// Função para checar se a linha 1 corresponde ao ID = 1
		// Função deve ler o primeiro caracter do arquivo como string, transformar em um int e comparar se o mesmo corresponde a c.ID	
}


int checkTamanhoLinha(){ // Função deve verificar se o tamanho da linha corresponde ao formato determinado usando strlen
	
}



int main(){
	FILE *arquivo;
	char linha, l, g, a;
	int i=0;
	
	
	abreArquivo(l,"remessa.txt"); // chamando a funcao abreArquivo
	//arquivo = fopen("remessa.txt", "rt");
	
	
		
	
}




