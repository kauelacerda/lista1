 #include <stdio.h>

void desenharArvore(int B, int L, int A) {
    // Desenhar a copa da árvore
    int espacos = B / 2;
    int asteriscos = 1;
    
    while (asteriscos <= B) {
        // Imprimir espaços antes dos asteriscos
        for (int i = 0; i < espacos; i++) {
            printf(" ");
        }
        
        // Imprimir asteriscos
        for (int i = 0; i < asteriscos; i++) {
            printf("*");
        }
        
        printf("\n");
        espacos--;
        asteriscos += 2;
    }
    
    // Desenhar o tronco
    espacos = (B - L) / 2;
    
    for (int i = 0; i < A; i++) {
        // Imprimir espaços antes do tronco
        for (int j = 0; j < espacos; j++) {
            printf(" ");
        }
        
        // Imprimir tronco
        for (int j = 0; j < L; j++) {
            printf("*");
        }
        
        printf("\n");
    }
}

int main() {
    int B, L, A;
    
    printf("=== CONSTRUTOR DE ARVORE DE NATAL ===\n");
    
    // Validar entrada da base (B)
    do {
        printf("Digite o numero de asteriscos na base (B - impar >= 3): ");
        scanf("%d", &B);
        
        if (B < 3 || B % 2 == 0) {
            printf("Erro: B deve ser impar e maior ou igual a 3.\n");
        }
    } while (B < 3 || B % 2 == 0);
    
    // Validar entrada da largura do tronco (L)
    do {
        printf("Digite a largura do tronco (L - impar, 1 <= L <= %d): ", B / 2);
        scanf("%d", &L);
        
        if (L < 1 || L > B / 2 || L % 2 == 0) {
            printf("Erro: L deve ser impar, entre 1 e %d.\n", B / 2);
        }
    } while (L < 1 || L > B / 2 || L % 2 == 0);
    
    // Validar entrada da altura do tronco (A)
    do {
        printf("Digite a altura do tronco (A - 2 <= A <= %d): ", B / 2);
        scanf("%d", &A);
        
        if (A < 2 || A > B / 2) {
            printf("Erro: A deve estar entre 2 e %d.\n", B / 2);
        }
    } while (A < 2 || A > B / 2);
    
    // Desenhar a árvore
    printf("\n");
    desenharArvore(B, L, A);
    
    return 0;
}
