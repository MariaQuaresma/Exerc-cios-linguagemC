#include <stdio.h>

int Absoluto(int num) {
    if (num < 0) {
        return -num; } 
	else {
        return num;
    }
}
int main() {
    int i, valores[5];
    for (i=0; i < 5; i++) {
        printf("%d - Informe o valor: ", i+1);
          scanf("%d", &valores[i]);
    }
  printf("\n---Valores absolutos---\n");
    for (i=0; i < 5; i++) {
        printf("Valor %d: %d\n", i+1, Absoluto(valores[i]));
    }
 return 0;
}