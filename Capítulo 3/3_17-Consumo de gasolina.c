/*Consumo de gasolina*/
//Repetição controlada por sentinela!

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void)
{
   setlocale(LC_ALL, "Portuguese_Brazil");

   int contador;
   float litrosTot, litros, kmTot, km, consumoTot;

   litrosTot = 0;
   kmTot = 0;
   contador = 0;

   //Recebendo primeiro dado do usuário
   printf("Informe quantos litros abasteceu (-1 para terminar): ");
   scanf("%f", &litros);
   
   if (litros != -1) {
      printf("Informe quantos km dirigiu: ");
      scanf("%f", &km);
   }

   while (litros != -1) {
      litrosTot = litrosTot + litros;
      kmTot = kmTot + km;
      contador = contador + 1;
       
      printf("O consumo atual é de %f km/l\n", km/litros);

      //Receber próximo dado
      printf("\nInforme quantos litros abasteceu (-1 para terminar): ");
      scanf("%f", &litros);
      
      if (litros != -1) {
         printf("Informe quantos km dirigiu: ");
         scanf("%f", &km);
      }
   }//Fim do While
 
   if (contador != 0) {
      consumoTot = kmTot/litrosTot;

      printf("\nO consumo geral foi de %f km/l\n", consumoTot);
   }
   else {
      printf("\nNenhum dado válido foi fornecido!\n");
   }

   system("pause");
   return 0;
}
