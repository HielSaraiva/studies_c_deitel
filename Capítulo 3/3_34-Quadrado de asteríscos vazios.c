/*Quadrado de asteríscos vazios*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void)
{
   setlocale(LC_ALL, "Portuguese_Brazil");

   int lado, contador1 = 1, contador2 = 1;

   printf("Escreva o valor inteiro do lado do quadrado: ");
   scanf("%d", &lado);

   printf("\n");

   if (lado>=2) {
      while (contador1<=lado) {
         printf("*");
         contador1+=1;
      }
      while (contador2<=lado-2) {
         contador1=1;

         printf("\n");
         printf("*");

         while (contador1<=lado-2) {
            printf(" ");
            contador1+=1;
         }
         printf("*");
         contador2+=1;
      }
   
      printf("\n");
      contador1=1;

      while (contador1<=lado) {
         printf("*");
         contador1+=1;
      }
      printf("\n");
   }
   else {
      printf("Digite um valor de lado válido\ne tente novamente!");
   }
   system("pause");
   return 0;
}