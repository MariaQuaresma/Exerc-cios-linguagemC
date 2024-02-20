#include <stdio.h>

int menorNum(int num1, int num2) {
    if (num1 < num2) {
        return num1; } 
	else {
        return num2; }
}
int main() {
    int num1, num2, menor;
  printf("Informe o primeiro numero: \n");
   scanf("%d", &num1);
  printf("\nInforme o segundo numero: \n");
   scanf("%d", &num2);
  menor = menorNum(num1, num2);
    printf("\nO menor numero e: %d\n", menor);
 return 0;
}