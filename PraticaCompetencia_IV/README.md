#### Estruturando o programa

Para resolução do exercício 1 é necessário estruturar o programa em partes.

Tento a partir disso desenvolver o raciocínio lógico necessário  para solucionar o problema apresentado de forma que também seja  mais fácil consultar o conteúdo posteriormente e registrar entre outras dificuldades enfrentadas durante o processo.



Para receber inicialmente as respostas foi criada a função *gabarito();* vista abaixo no código:



````c++
void gabarito()
{
	
	
	char i, resposta[10];
	
	
	
	for(i=1; i<=10; i++){
		printf("Insira a resposta da %.ia questao: " , i);
		scanf("%s" , &resposta[i]);
		if(resposta[i] == 'A' ||  resposta[i] == 'a' ||
			resposta[i] == 'B' || resposta[i] == 'b' ||
			resposta[i] == 'C' || resposta[i] == 'c'  ||
			resposta[i] == 'D'  || resposta[i] == 'd'){		
				
			}
			else{
				printf("Opcao incorreta\n");
				i--;
			}
			
		}
````

O programa considera apenas as opções A,B,C,D(a,b,c,d) como opção correta uma escolha melhor é utilizar toupper para evitar conflitos na hora de realizar a contagem das notas.

````c++
void gabarito()
{
	
	
	char i, resposta[10];
	
	
	
	for(i=1; i<=10; i++){
		printf("Insira a resposta da %.ia questao: " , i);
		scanf("%s" , &resposta[i]);
        //utilizando toupper para receber valores e converter em letras MAISCULAS
     	resposta[i] = toupper (resposta[i]);
		if(resposta[i] == 'A' || 
			resposta[i] == 'B' || 
          	 resposta[i] == 'C' ||
			resposta[i] == 'D'){		
				
			}
			else{
				printf("Opcao incorreta\n");
				i--;
			}
			
		}
````



Assim, ficamos com a versão acima por se tratar da facilidade em desenvolver o código em seguida, pois será necessário realizar a contagem de notas e o compilador c++ diferencia letras MAIUSCULAS de letras minúsculas.

Caso deseje imprimir as respostas armazenadas no vetor resposta[10] é só executar

````c++
	//Imprime os resultados do gabarito
	for(i=1; i<=10; i++){
		printf("Resposta da %.ia questao: %c \n", i, resposta[i]);
	}
````

Após receber e testar o armazenamento do gabarito é necessário criar uma função que irá receber os dados dos alunos e receber as respostas das questões.

Abaixo foi desenvolvida a função *formulario();*

````c++
void formulario()
{	//RA[considerando uma turma de 50 alunos]
	int RA[50], i, j, count=0;
	int qtdAlunos = 50;
	/*char nome[50];*/
	char respostasQuestionario[10];
	
	
		for(i=1; i<=qtdAlunos; i++){
			printf("Informe o RA: ");
			scanf("%d", &RA[i]);
			count ++;
			
            //Se o RA for <= 0 o programa para
			if(RA[i]<=0)
				break;
			
			
				
			else {
				/*printf("Infome o Nome:");
				scanf("%s", &nome[i]);*/
				
				
				for(j=1; j<=10; j++){
				printf("Insira a resposta da %.ia questao: " , j);
				fflush(stdin);
				scanf("%s" , &respostasQuestionario[i]);
				respostaQuestionario[i] = toupper(respostaQuestionario[i]);
				}
	
			}
		}

````



Note que assim como na função *gabarito();* como na função *formulario();* é utilizado a função *toupper();*

Para imprimir as respostas é só adicionar

````c++
//Mostra os valores que foram registrados excluindo o ultimo indice por ser = ou < que 0
		
		for(i=1; i<=count-1; i++){
		printf("RA aluno %i: %d - ", i, RA[i]);
		printf("Nome aluno: %c \n",  nome[i]);
		
		    for(j=1; j<=10; j++){
		    printf("Resposta %.ia questao :  %c  \n   ", j,  respostasQuestionario[i]);
	}
	
		
		}	
}
````



Após receber o gabarito e o formulário ter sido preenchido é necessário corrigir. A função *corrigir();* abaixo:

````c++
int corrigir(){
	int i, j, contador=0, ra[50];
    char respostasAlunos[10];
   	ra[50] = *formulario(RA[i]);
	respostasAlunos = formulario*(respostasQuestionario[]);
}
````



Mas o código acima deu erro :crying_cat_face:



Após alguns minutos no Stack overflow

A função precisa validar as respostas de cada aluno da na função *formulario();* corresponde ao *gabarito();*

````c++
	
typedef int (*corrigir)(int, char, char);

int correcao(int RA[],char reposta[], char respostasQuestionario[], corrigir)
{
    int i, j, l, respostasCertas=0;
    for(i=0; i<50; i++){
        for(j=0; j<10; j++){
            for(l=0; l<10; l++)
                if(respostasQuestionario[j] == reposta[l]){
                    respostasCertas++;
                }
                
        }
}

	for(i=0; i<50; i++){
        printf("RA: %d, ---- nota: %d  ", RA[i], respostasCertas);
    }
    
}
````

O compilador não acusou nenhum erro na função, mas ao chamar é solicitado que sejam passados os parâmetros. Como a função *main ()* ainda está em construção deixarei para verificar  depois o funcionamento correto

Após realizar a correção é necessário realizar alguns cálculos solicitados ao programa. 

- Percentual de aprovação da sala;
- Média da classe;
- Qtd RA com a maior nota;
- Qtd RA com a menor nota;

````
void verificaAprovados()
````

