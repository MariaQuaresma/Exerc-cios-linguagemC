#include <stdio.h>

int main() {
	int op;
	float raio, area, perimetro;
 printf("1 - Area da circunferencia\n");
 printf("2 - Perimetro da circunferencia\n");
 printf("Escolha um indicador de operacao:\n");
  scanf("%d", &op);
  if (op == 1) {
  	printf("\nInforme o raio da cirfunferencia: \n");
  	 scanf("%f", &raio);
  	   area = 3.14*raio*raio;
  	printf("\nA area da circunferencia e: %3.f\n", area);
  }
  else if (op == 2) {
  	printf("\nInforme o raio da circunferencia: \n");
  	 scanf("%f", &raio);
  	   perimetro = 2*3.14*raio;
  	printf("\nO perimetro da circunferencia e: %3.f\n", perimetro);
  }
  else {
  	printf("\nO indicador de operacao foi mal fornecido!\n");
  }
 getchar();
 return 0;
}