#include <stdio.h>

int main () {
	int numero, antecessor, sucessor;
 printf("Informe um numero inteiro: \n");
  scanf("%d", &numero);
     antecessor = numero - 1;
     sucessor = numero + 1;
  printf("\nO antecessor do numero %d e: %d\n", numero, antecessor);
  printf("O sucessor do numero %d e: %d\n", numero, sucessor);
 getchar ();
 return 0;
}