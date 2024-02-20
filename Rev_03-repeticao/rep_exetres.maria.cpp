#include <stdio.h>

int main() {
    int dividendo, divisor;
    int quociente = 0, resto = 0;
      printf("Digite o dividendo: ");
       scanf("%d", &dividendo);
      printf("Digite o divisor: ");
       scanf("%d", &divisor);
    while (dividendo >= divisor) {
        dividendo -= divisor;
        quociente++;
    }
    resto = dividendo;
      printf("Quociente: %d\n", quociente);
      printf("Resto: %d\n", resto);
 getchar();
 return 0;
}
