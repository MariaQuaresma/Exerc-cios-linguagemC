#include <stdio.h>

int main() {
	int ano;
 printf("Informe um ano: \n");
  scanf("%d", &ano);
   if ((ano%4==0 && ano%100!=0) || (ano%400==0)) {
   	printf("\n%d e um ano bissexto!\n", ano);
   }
   else {
   	printf("\n%d nao e um ano bissexto!\n", ano);
   }
 getchar();
 return 0;
}