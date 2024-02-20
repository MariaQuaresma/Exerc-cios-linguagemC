#include <stdio.h>

int ehPar(int num) {
    return num%2==0;
}
int main() {
    int num;
  printf("Informe um numero inteiro: ");
    scanf("%d", &num);
    if (ehPar(num)) {
        printf("\n%d e um numero par!\n", num);
    } 
	else {
        printf("\n%d e um numero impar!\n", num);
    }
 return 0;
}