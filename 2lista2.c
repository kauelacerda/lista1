#include <stdlib.h>


int main() {
   int n, i, j, k;


   // Solicita ao usuário o valor de N
   do {
       printf("Digite um valor para N (maior ou igual a 2): ");
       scanf("%d", &n);
   } while (n < 2);


   // Loop para cada linha da pirâmide
   for (i = 1; i <= n; i++) {

       for (j = 1; j <= n - i; j++) {
           printf("  ");
       }


       // Loop para os números crescentes
       for (k = 1; k <= i; k++) {
           printf("%d ", k);
       }


       // Loop para os números decrescentes
       for (k = i - 1; k >= 1; k--) {
           printf("%d ", k);
       }


       printf("\n");
   }


   return 0;
}
