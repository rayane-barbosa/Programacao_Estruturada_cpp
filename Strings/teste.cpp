#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main () {
   int val, variavel;
   char str[20];
   
   
  scanf("%d", &variavel);
   strcpy(str, "variavel");
   val = atoi(str);
   printf("String value = %s, Int value = %d\n", str, val);

   strcpy(str, "tutorialspoint.com");
   val = atoi(str);
   printf("String value = %s, Int value = %d\n", str, val);

   return(0);
}
