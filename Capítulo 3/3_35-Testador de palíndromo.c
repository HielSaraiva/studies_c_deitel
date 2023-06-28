/*Testador de palíndromos*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void)
{
   setlocale(LC_ALL, "Portuguese_Brazil");

   int num, resto, resultado, contador=1, divisor=10000;
   int alg1, alg2, alg4, alg5;
   
   printf("Digite um número de 5 algarismos para que seja determinado se ele é um palíndromo:\n");
   scanf("%d", &num);

   if (num>=10000 && num<=99999) {

      while (contador<=5) {
         resto = num%divisor;
         resultado = (num - resto)/divisor;

         if (contador==1) {
            alg1 = resultado;
         }
         if (contador==2) {
            alg2 = resultado;
         }
         if (contador==4) {
            alg4 = resultado;
         }
         if (contador==5) {
            alg5 = resultado;
         }
         num = resto;
         divisor /= 10;
         contador += 1;
      }
      (alg1 == alg5 && alg2 == alg4) ? printf("\nO número digitado é um palíndromo!\n") : printf("\nO número digitado não é um palíndromo!\n");
   }
   else {
      printf("\nDigite um número de 5 dígitos e tente novamente!\n");
   }
   system("pause");
   return 0;
}