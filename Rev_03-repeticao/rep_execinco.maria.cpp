#include <stdio.h>

int main() {
    int valor;
    int soma = 0;
    int contador = 0;
    float media;
      printf("Digite valores positivos (digite um valor negativo para parar)\n");
     while (1) {
        printf("Digite um valor: ");
        scanf("%d", &valor);
     if (valor < 0) {
            break; }
        soma += valor;
        contador++;
    }
    if (contador > 0) {
        media = soma / contador;
        printf("\nA media dos valores fornecidos e: %.2f\n", media); } 
	 else {
        printf("\nNenhum valor valido foi fornecido.\n");
    }
 getchar();
 return 0;
}
