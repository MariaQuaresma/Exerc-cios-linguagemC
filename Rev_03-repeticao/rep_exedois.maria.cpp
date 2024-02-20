#include <stdio.h>

int main() {
    int numero;
    int i;
    int Primo = 1;
       printf("Digite um numero inteiro: ");
        scanf("%d", &numero);
    if (numero <= 1) {
        Primo = 0; } 
	 else {
        for (i = 2; i <= numero / 2; i++) {
            if (numero % i == 0) {
                Primo = 0; break; }
        }
    }
    if (Primo) {
        printf("\n%d e um numero primo!\n", numero); } 
	 else {
        printf("\n%d nao e um numero primo!\n", numero);
    }
 getchar();
 return 0;
}
