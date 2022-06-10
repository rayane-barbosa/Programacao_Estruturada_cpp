/*O objetivo do projeto ? desenvolver um programa que, a partir de um arquivo REMESSA,
 gera um arquivo RETORNO para cada um de seus clientes. Com esse arquivo, o cliente pode 
 efetuar seu controle particular de pagamento dos boletos, al?m do banco poder atualizar 
 o saldo na conta corrente desses seus clientes. */
 
 
 /*Regras para o desenvolvimento do programa:
 
1 - O programa deve checar se o arquivo de remessa est? no formato padr?o, 
caso n?o esteja deve ser gerado um arquivo chamado ERRO.TXT contendo o 
tipo de erro encontrado. O erro deve ter a informa??o necess?ria para que, 
quem o leia, tenha condi??es de resolver o problema.

2 - Cada arquivo de retorno cont?m os boletos referentes a um cliente, ou seja, 
se forem encontrados 10 clientes diferentes no arquivo de remessa, ser?o gerados 
10 arquivos de retorno com os boletos referentes a cada um deles. O nome do arquvio 
de retorno deve seguir o padrao:
 AAAAMMDD_CLIENTE.txt onde AAAAMMDD ? a data de gera??o do retorno e CLIENTE ? o c?digo do cliente obtido no arquivo de remessa.
 
 
3 -O programa nao tera qualquer tipo de interface com o usu?rio (qualquer opera??o deve ser passada por linha de comando). 

 */
 
 

#include<stdio.h>
#include<string.h>

#define COD_OK "VALIDO"
#define COD_SIZE "ERRO TAMANHO!"
#define COD_ID "ERRO ID!"
#define COD_CLIENTE "ERRO CLIENTE"
#define COD_CONTA "ERRO CONTA!"
#define COD_NUM_BOLETO "ERRO NUMERO BOLETO!"
#define COD_DATA_VENC "ERRO DATA DE VENCIMENTO"
#define COD_DATA_PAG "ERRO DATA PAGAMENTO"
#define COD_VALOR "ERRO VALOR"
#define COD_DATA "ERRO DATA CABECALHO"


struct Data{
	char ano[4], mes[2], dia[2];
	
};

struct CABECALHO{ // primeira linha do arquivo REMESSAS que ser? copiada para o arquivo RETORNO 
	char ID='1';
	struct Data DATA;
};

struct boletoPago{//linhas de identificacao dos boletos pagos arquivo REMESSAS.txt
	char ID='2', CLIENTE, CONTA, NUM_BOLETO;
	struct Data DATA_VENC, DATA_PAGAMENTO;
	char VALOR_PAGO[8];
};

struct boletoPagoCliente{//linhas de identificacao dos boletos pagos arquivo RETORNO.txt
	char ID='2';
	char CONTA, NUM_BOLETO;
	struct Data DATA_PAGAMENTO;
	char VALOR_PAGO;
	
};

struct linhaFinal{		// ultima linha do arquivo retorno
	char ID='3';
	char TOTAL_BOLETOS;
	char VALOR_TOTAL;

};


FILE* abreArquivo(char modo, char caminho[100]){ //; Funcao abre o arquivo 
	FILE *arquivo;
	switch(modo){ // define o que será realizado no arquivo grava??o, leitura ou apende que ? incluir conte?do ao final de um arquivo existente 
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
	
	if(arquivo==NULL){
    	printf("Erro ao abrir arquivo.");
  }
  else{
    	return arquivo;
	}
}
void fecharArquivo(FILE* arquivo){ // Função para fechar o arquivo
	fclose(arquivo);
}


char* checarCabecalho(const char *cabecalho){
	int i=0;
	struct CABECALHO id;
		
		// VALIDA QTD DE CARACTERES DO CABECALHO
		if(strlen(cabecalho)!=9){
			return(COD_SIZE);
		}
		
		//VALIDA ID LINHA
		if(cabecalho[0]!=id.ID){
			return(COD_ID);
		}
		//VALIDA DATA
		for(i=1;i<=8; i++){
			if(cabecalho[i]<'0' || cabecalho[i]> '9'){
				return(COD_DATA);
			}
		}
		
		return(COD_OK);
}

char* checarLinha(const char *linha){
		int i=0;
		struct boletoPago id;
		
		// VALIDA QTD DE CARACTERES
		if(strlen(linha)!=44){
			return(COD_SIZE);
		}
		
		//VALIDA ID LINHA
		if(linha[0]!=id.ID){
			return(COD_ID);
		}
		//VALIDA COD CLIENTE
		for(i=1;i<=5; i++){
			if(linha[i]<'0' || linha[i]>'5'){
				return(COD_CLIENTE);
				
			}
		}
		//VALIDA CONTA
		for(i=6; i<=11; i++){
			if(linha[i]<'0' || linha[i]>'6'){
				return(COD_CONTA);
			}
		}
		
		//VALIDA COD BOLETO
		for(i=12;i<=19; i++){
			if(linha[i]<'0' || linha[i] > '9'){
				return(COD_NUM_BOLETO);
			}
		}
		
		//VALIDA DATA DE VENCIMENTO
		for(i=20; i<=27; i++){
			if(linha[i]<'0' || linha[i]>'9'){
				return(COD_DATA_VENC);
			}
		}
		
		
		//VALIDA DATA DE PAGAMENTO
		for(i=28; i<=35; i++){
			if(linha[i]<'0' || linha[i]>'9'){
				return(COD_DATA_PAG);
			}
		}
		
		// VALIDA VALOR
		for(i=26; i<=43; i++){
			if(linha[i]<'0'|| linha[i]>'9'){
				return(COD_VALOR);
			}
		}
			
		return(COD_OK);
}


FILE* arquivoErro(){
		FILE* erro;
	erro = abreArquivo('g',"erro.txt");
	
}




int main(){
	FILE* arquivo, erro;
	char linha[44], l, g, a;
	int i=0, caracter;
	
	
	arquivo = abreArquivo('l',"remessa.txt"); // chamando a funcao abreArquivo
	//arquivo = fopen("remessa.txt", "rt");
	//printf ("%s", checarCabecalho("120222058"));
	//printf ("%s", checarLinha("23333301234501234567202205302022052912345612"));
	
	
	//Função para ler o arquivo linha a linha
	do{
	
	caracter = fgetc(arquivo);
		if(caracter =='\n'){
			i++;
		}
		if(i=1){
			checarCabecalho('caracter');
		}
	}
	
	while(caracter != EOF);
	
	
		
}







