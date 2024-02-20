#include <stdio.h>

int main() {
    int numero;
    int possuiDigito3 = 0;
      printf("Digite um numero inteiro positivo: ");
       scanf("%d", &numero);
    while (numero > 0) {
        int digito = numero % 10; 
        if (digito == 3) {
            possuiDigito3 = 1;
            break; }
        numero /= 10; 
    }
    if (possuiDigito3) {
        printf("\nO numero contem o digito 3.\n"); }
	 else {
        printf("\nO numero nao contem o digito 3.\n");
    }
 getchar();
 return 0;
}
