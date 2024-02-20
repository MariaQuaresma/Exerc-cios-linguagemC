#include <stdio.h>

int main() {
	int num;
	  printf("Digite um numero: ");
	  scanf("%d", &num);
	if (num %2 == 0) {
		printf("\nEsse numero e par!");
	}
	else {
		printf("\nEsse numero e impar!");	}
 getchar();
 return 0;
}