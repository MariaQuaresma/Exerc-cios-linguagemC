#include <stdio.h>

int main () {
	float F, C;
 printf("Informe a temperatura em graus centigrafos: \n");
  scanf("%f", &C);
   F = (9*C + 160)/5;
 printf("\nA conversao para a temperatura em Fahrenheit e: %3.f\n", F);
getchar();
return 0;
}