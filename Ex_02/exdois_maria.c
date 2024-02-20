#include <stdio.h>

int main() {
	float a, b, c;
 printf("Informe os lados do triangulo retangulo: \n");
  scanf("%f %f %f", &a, &b, &c);
  if (a*a == b*b + c*c || b*b == a*a + c*c || c*c == b*b + a*a) {
  	printf("\nE um triangulo retangulo!\n");
  }
  else if (a>=b+c || b>=a+c || c>=a+b) {
  	printf("\nNao e formado nenhum triangulo!\n");
  }
  else { 
    printf("\nNumeros invalidos!\n");
  }
  getchar();
  return 0;
}