#include <stdio.h>

int main() {
    int vet[50], i;
 for (i = 0; i < 50; i++) {
        printf("%d - Informe numero: ", i+1);
        scanf("%d", &vet[i]);
    }
    printf("\n\nSo os indices pares: ");
      for (i = 0; i < 50; i++) {
        if (vet[i] % 2 == 0) {
            printf("%d ", vet[i]);
        }
    }
    printf("\n\nSo os indices impares: ");
      for (i = 0; i < 50; i++) {
        if (vet[i] % 2 != 0) {
            printf("%d ", vet[i]);
        }
    }
    printf("\n\nTodo o vetor de tras para frente: ");
      for (i = 49; i >= 0; i--) {
        printf("%d ", vet[i]);
    }
 getchar();
 return 0;
}