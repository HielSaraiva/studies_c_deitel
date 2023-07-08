/*Conversão de strings em inteiros na realização 
de cálculos*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void) {
   setlocale(LC_ALL, "Portuguese");

   char int1[10];
   int num;
   
   printf("Digite o string: ");
   scanf("%[^\n]", int1);

   num = atoi(int1);

   printf("\nO número digitado é: %d", num);
   
   return 0;
}