#include <stdio.h>

int main() {
    int numero;
    int divisor;
    int somaDivisores;
      printf("Numeros perfeitos entre 1 e 100:\n");
    for (numero = 1; numero <= 100; numero++) {
        somaDivisores = 0;
        for (divisor = 1; divisor <= numero / 2; divisor++) {
            if (numero % divisor == 0) {
                somaDivisores += divisor;  }
        }
        if (somaDivisores == numero) {
            printf("%d\n", numero);  }
    }
 getchar();
 return 0;
}
