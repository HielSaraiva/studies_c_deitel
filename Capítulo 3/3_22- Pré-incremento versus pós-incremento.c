/*Pré-incremento versus pós-incremento*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void)
{
   setlocale(LC_ALL, "Portuguese_Brazil");

   int a=5;

   //Pós-incremento
   printf("%d\n", a);
   printf("%d\n", a++);
   printf("%d\n", a);

   //Pré-incremento
   a=5;
   printf("\n%d\n", a);
   printf("%d\n", ++a);
   printf("%d\n", a);  

   system("pause");
   return 0;
}