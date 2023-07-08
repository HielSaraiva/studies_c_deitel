/*Exibição de strings em maiúsculas e minúsculas*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h>
#include <string.h>

int main(void) {
   setlocale(LC_ALL, "Portuguese");

   char s[100];
   int i, tam;

   printf("Digite uma linha de texto:\n");
   scanf("%[^\n]", s);

   tam = strlen(s);

   for (i = 0; i < tam; i++) {
      printf("%c", toupper(s[i]));
   }
   printf("\n");
   for (i = 0; i < tam; i++) {
      printf("%c", tolower(s[i]));
   }
   return 0;
}