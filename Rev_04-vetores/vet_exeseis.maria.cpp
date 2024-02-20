#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
 int vet[10], num, i, encontrado = 0;
  srand(time(0)); //numeros diferentes em cada execução
    for (i = 0; i < 10; i++) {
        vet[i] = rand() % 20;  // 20 numeros aleatorios
        printf("%d ", vet[i]);
    } 
    do{
 printf("\n\nInforme um numero entre 0 e 20: ");
  scanf("%d", &num);
  } while(num>20 || num<0);
     for (i = 0; i < 10; i++) {
        if (vet[i] == num) {
            printf("\nO numero %d foi encontrado na posicao: %d\n", num, i+1);
            encontrado = 1; }
     }
     if (!encontrado) {
        printf("\nO numero %d nao foi encontrado no vetor\n", num);
     }
 getchar();
 return 0;
}