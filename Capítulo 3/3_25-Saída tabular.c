/*Saída tabular*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void)
{
   setlocale(LC_ALL, "Portuguese_Brazil");

   int N = 1;
   
   printf("N\t10*N\t100*N\t1000*N\n\n");

   while (N <= 10) {
	   printf("%d\t%d\t%d\t%d\n", N, 10*N, 100*N, 1000*N);
	   N = N+1;
   }

   system("pause");
   return 0;
}
