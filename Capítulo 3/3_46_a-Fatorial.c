/*Fatorial!-Item A*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void)
{
   setlocale(LC_ALL, "Portuguese_Brazil");

   int num, prod=1;

   printf("Escreva um número inteiro não-negativo: ");
   scanf("%d", &num);

   if (num>=0) {
      while (num>=1) {
         prod = num*prod;
         num-=1;
      }
      printf("O seu fatorial é: %d\n", prod);
   }
   else {
      printf("Digite um número positivo!\n");
   }
   system("pause");
   return 0;
}//Só calcula corretamente até 2^12!