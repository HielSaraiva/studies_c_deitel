/*Imprimir asteriscos*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void)
{
   setlocale(LC_ALL, "Portuguese_Brazil");

   int contador=1;
   
   while (contador<=100) {
      printf("*");
      if (contador%10==0) {
         printf("\n");
      }
      contador+=1;
   }
   system("pause");
   return 0;
}