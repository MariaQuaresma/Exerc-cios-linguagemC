#include <stdio.h>

int main() {
	int num=1, par=0, impar=0;
 printf("Informe numeros inteiros positivos: \n(para finalizar digite um numero maior do que 1000):\n");
  while (num<=1000) {
	 scanf("%d", &num);
   if(num%2==0 && num<=1000) {
     par+=num; 
   }
   else if (num%2!=0 && num<=1000) {
     impar+=num; }
 }
  printf("\nA soma dos numeros pares e: %d\n", par);
  printf("A soma dos numeros impares e: %d\n", impar);
getchar();
return 0;
} 