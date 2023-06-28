/*Quadrado de asteríscos*/

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

   while (contador2<=lado) {
      while (contador1<=lado) {
         printf("*");
         contador1+=1;
      } 
      printf("\n");
      contador1=1;
      contador2+=1;
   }
   
   system("pause");
   return 0;
}