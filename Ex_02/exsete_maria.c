#include <stdio.h>

int main() {
	float A, B, temp;
 printf("Informe o valor de A: \n");
  scanf("%f", &A);
 printf("Informe o valor de B: \n");
  scanf("%f", &B);
   temp = A;
   A = B;
   B = temp;
 printf("\nO valor de A trocado e: %f\n", A);
 printf("\nO valor de B trocado e: %f\n", B);
getchar();
return 0;
}