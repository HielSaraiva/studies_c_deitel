#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main(void) {
   setlocale(LC_ALL, "Portuguese");

   long int value1 = 1231, value2 = 1232;

   //A.
   long int *lPtr = NULL;

   //B.
   lPtr = &value1;

   //C.
   printf("%ld\n", *lPtr);

   //D.
   value1 = value2;

   //E.
   printf("%ld\n", value2);

   //F.
   printf("%p\n", &value1);

   //G.
   printf("%p\n", lPtr); //Sim

   return 0;
}