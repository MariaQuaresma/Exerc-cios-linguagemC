#include <stdio.h>

int main () {
	float num, umQuarto;
printf("Informe um numero real: \n");
 scanf("%f", &num);
   umQuarto = num/4;
  printf("\nUm quarto de %3.f e: %3.f\n", num, umQuarto);
getchar();
return 0;
}