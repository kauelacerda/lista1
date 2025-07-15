#include <stdio.h>

void trianguloPreenchido(int altura) {
    for(int i = 1; i <= altura; i++) {
        for(int j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }
}

void trianguloVazado(int altura) {
    for(int i = 1; i <= altura; i++) {
        for(int j = 1; j <= i; j++) {
            if(i == altura || j == 1 || j == i) {
                printf("* ");
            } else {
                printf("  ");
            }
        }
        printf("\n");
    }
}

int main() {
    int altura;
    char tipo;
    
    printf("Digite a altura do triângulo: ");
    scanf("%d", &altura);
    
    printf("Preenchido (P) ou Vazado (V)? ");
    scanf(" %c", &tipo);
    
    if(tipo == 'P' || tipo == 'p') {
        trianguloPreenchido(altura);
    } else if(tipo == 'V' || tipo == 'v') {
        trianguloVazado(altura);
    } else {
        printf("Opção inválida!\n");
    }
    
    return 0;
}
#include <stdio.h>

void trianguloPreenchido(int altura) {
    for(int i = 1; i <= altura; i++) {
        for(int j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }
}

void trianguloVazado(int altura) {
    for(int i = 1; i <= altura; i++) {
        for(int j = 1; j <= i; j++) {
            if(i == altura || j == 1 || j == i) {
                printf("* ");
            } else {
                printf("  ");
            }
        }
        printf("\n");
    }
}

int main() {
    int altura;
    char tipo;
    
    printf("Digite a altura do triângulo: ");
    scanf("%d", &altura);
    
    printf("Preenchido (P) ou Vazado (V)? ");
    scanf(" %c", &tipo);
    
    if(tipo == 'P' || tipo == 'p') {
        trianguloPreenchido(altura);
    } else if(tipo == 'V' || tipo == 'v') {
        trianguloVazado(altura);
    } else {
        printf("Opção inválida!\n");
    }
    
    return 0;
}
