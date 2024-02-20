#include <stdio.h>

int main() {
  float num1, num2, num3;
  float maiorvalor, menorvalor, intermediario;
      printf("Digite o primeiro valor: ");
       scanf("%f", &num1);
      printf("Digite o segundo valor: ");
       scanf("%f", &num2);
      printf("Digite o terceiro valor: ");
       scanf("%f", &num3);
 if (num1 >= num2 && num1 >= num3) {
    maiorvalor = num1;
       if (num2 >= num3) {
            intermediario = num2;
            menorvalor = num3; }
	     else {
            intermediario = num3;
            menorvalor = num2; }
    } 
else if (num2 >= num1 && num2 >= num3) {
    maiorvalor = num2;
        if (num1 >= num3) {
            intermediario = num1;
            menorvalor = num3;   } 
	     else {
            intermediario = num3;
            menorvalor = num1; }
    } 
else {
  maiorvalor = num3;
   if (num1 >= num2) {
      intermediario = num1;
      menorvalor = num2;} 
	   else {
            intermediario = num2;
            menorvalor = num1; }
    }
    printf("\nMaior valor e: %.3f\n", maiorvalor);
    printf("\nMenor valor e: %.3f\n", menorvalor);
    printf("\nValor intermediario e: %.3f\n", intermediario);
 getchar();
 return 0;
}