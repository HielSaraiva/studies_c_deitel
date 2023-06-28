/*Imprimindo números por um loop*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void)
{
   setlocale(LC_ALL, "Portuguese_Brazil");

   int a=1;

   while (a <=10) {
      printf("%d  ", a++);
   }
   
   system("pause");
   return 0;
}