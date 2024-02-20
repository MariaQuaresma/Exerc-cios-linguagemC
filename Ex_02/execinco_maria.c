#include <stdio.h>

int main() {
	int op;
	float Aq, Ar, At, lado, base, altura, base_maior, base_menor;
 printf("1 - Area do quadrado\n");
 printf("2 - Area do retangulo\n");
 printf("3 - Area do trapezio\n");
 printf("Escolha um codigo para calcular: \n");
  scanf("%d", &op);
   if (op == 1) {
   	printf("\nInforme o lado: \n");
   	 scanf("%f", &lado);
   	  Aq = lado*lado;
   	printf("\nA area do quadrado e: %3.f\n", Aq);
   }
   else if (op == 2) {
   	printf("\nInforme a base: \n");
   	 scanf("%f", &base);
   	printf("\nInfome a altura: \n");
   	 scanf("%f", &altura);
   	  Ar = base*altura;
   	printf("\nA area do retangulo e: %3.f\n", Ar);
   }
   else if (op == 3) {
   	printf("\nInforme a base maior: \n");
   	 scanf("%f", &base_maior);
   	printf("\nInforme a base menor: \n");
   	 scanf("%f", &base_menor);
   	printf("\nInforme a altura: \n");
   	 scanf("%f", &altura);
   	  At = ((base_maior + base_menor)/2)*altura;
   	printf("\nA area do trapezio e: %3.f\n", At);
   }
   else {
   	printf("\nCodigo invalido! \n");
   }
 getchar();
 return 0;
}