/*Qual é a velocidade do seu computador?*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void)
{
  setlocale(LC_ALL, "Portuguese_Brazil");
  
   int contador=1;
   char teste;

   printf("Teste de velocidade do seu computador!\nTecla enter para contar até 3.000.000!\n");
   scanf("%c", &teste);
   
   while (contador<=3000000) {
      if (contador==1000000) {
         printf("\n1.000.000\n");
      }
      if (contador==2000000) {
         printf("2.000.000\n");
      }
      if (contador==3000000) {
         printf("3.000.000\n");
      }
      contador+=1;
   }
   system("pause");
   return 0;
}