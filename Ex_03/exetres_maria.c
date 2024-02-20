#include <stdio.h>

int main() {
	 int n=1, num_dig=1, produto=1;
 printf("Digite os numeros a serem multiplicados (para finalizar digite zero): \n");
  while (num_dig!=0) {
 	 scanf("%d", &n);
 	  if (n!=0) {
	
 	   produto*= n;
 	   num_dig = n; }
 }
 printf("\nO produto dos numeros digitados e: %d\n", produto);
 getchar();
 return 0;
}