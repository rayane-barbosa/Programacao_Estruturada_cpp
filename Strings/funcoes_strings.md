**Função strcpy** da biblioteca <string.h> é capaz de armazenar uma string literal numa variável strig ou copiar so conteúdo de uma variável string para outra

**Sintaxe:**

``strcpy (variável, string);``

Essa função copia o valor da string na segunda posição do argumento para uma variável string na primeira posição. O segundo argumento pode ser uma variável, uma expressão string ou um valor literal string contido entre aspas

``*strcpy (string_destino,string_origem);*``

```c
/* ex1 utilização da função strcpy */

#include < stdio.h>             /* diretiva */
#include < string.h> 
#define LENGHT 17

main()                /* função principal */
{

   char origem[LENGHT} =  "Aqui vamos de novo!", 
           destino[LENGHT];

    strcpy (destino, "constante string");
    printf ("%s\n", destino);
    strcpy (destino, origem);

    printf ("%s\n", destino);
   }
```



#### *gets*

*A função **gets()** lê uma string do teclado. Sua forma geral é:*

 *gets (nome_da_string);*

```c
/* ex2 utilização da função strcpy */

#include <stdio.h>
#include <string.h>
int main ()
{
	char str1[100],str2[100],str3[100];
	printf ("Entre com uma string: ");
	gets (str1);
	strcpy (str2,str1);	/* Copia str1 em str2 */
	strcpy (str3,"Voce digitou a string "); /* Copia "Voce digitou a string" em str3 */
	printf ("\n\n%s%s",str3,str2);
	return(0);
```



**Função strcmp**: compara duas strings e devolve um valor inteiro que lhe diz qual das strings vem antes no código ASCII.

**Sintaxe:**

``strcmp (string1, string2);``

A função *strcmp* devolve um valor inteiro que indica o relacionamento entre *string1* e *string2*:

```c
/* ex1   utilização da função strcmp */
#include < stdio.h>             /* diretivas */
#include < string.h> 
main()                /* função principal */
   {

    char string1[] = "um", string2[] = "um";
    int menor, result = 0;
    if (strlen (string2) >  = strlen (string1))
       result = strcmp(string1, string2);

    printf ("A string %s encontrada.", result = = 0? "foi : 
"não foi");
   }
```



```c
/* ex2   utilização da função strcmp */
#include <stdio.h>
#include <string.h>
int main ()
{
	char str1[100],str2[100];
	printf ("Entre com uma string: ");
	gets (str1);
	printf ("\n\nEntre com outra string: ");
	gets (str2);
	if (strcmp(str1,str2))
        	printf ("\n\nAs duas strings são diferentes.");
	else printf ("\n\nAs duas strings são iguais.");
	return(0);
}
```