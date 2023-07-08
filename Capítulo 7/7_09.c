#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define SIZE 5

int main(void) {
   setlocale(LC_ALL, "Portuguese");

   //A.
   unsigned int values[SIZE] = {2, 4, 6, 8, 10};

   //B.
   unsigned int *vPtr = NULL;

   //C.
   int i;
   for (i = 0; i < 5; i++) {
      printf("%d ", values[i]);
   }
   printf("\n");

   //D.
   vPtr = values; //Ou vPtr = &values[0];

   //E.
   for (i = 0; i < 5; i++) {
      printf("%d ", *(values + i));
   }
   printf("\n");

   //F.
   for (i = 0; i < 5; i++) {
      printf("%d ", *(vPtr + i));
   }
   printf("\n");

   //G.
   for (i = 0; i < 5; i++) {
      printf("%d ", vPtr[i]);
   }
   printf("\n");

   //I.
   printf("%p\n", vPtr);
   printf("%d\n", *(vPtr));
   printf("%p\n", vPtr + 3);
   printf("%d\n", *(vPtr + 3));

   //J.
   vPtr = &values[4];
   printf("%p\n", (vPtr - 4));
   printf("%d\n", *(vPtr - 4));

   system("pause");
   return 0;
}