#include <stdio.h>

int main() {
  int largura;

  printf("Digite a largura central do losango: ");
  scanf("%d", &largura);

  if (largura % 2 == 0) {
    printf("A largura deve ser um número ímpar.\n");
    return 1;
  }

  int i, j;
  for (i = 1; i <= largura; i += 2) {
    for (j = 0; j < (largura - i) / 2; j++) {
      printf(" ");
    }
    for (j = 0; j < i; j++) {
      printf("*");
    }
    printf("\n");
  }

  for (i = largura - 2; i >= 1; i -= 2) {
    for (j = 0; j < (largura - i) / 2; j++) {
      printf(" ");
    }
    for (j = 0; j < i; j++) {
      printf("*");
    }
    printf("\n");
  }

  return 0;
}
