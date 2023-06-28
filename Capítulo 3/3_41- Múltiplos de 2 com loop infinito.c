/*Múltiplos de 2 com loop infinito*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void)
{
   setlocale(LC_ALL, "Portuguese_Brazil");

   int num=2;
   
   while (1) {
      printf("%d ", num);
      num*=2;
   }
   system("pause");
   return 0;
}/*Aparecem vários zeros!*/