#include <stdio.h>

int main () {
	int num1, num2, num3, media;
 printf("Informe tres numeros inteiros: \n");
  scanf("%d %d %d", &num1, &num2, &num3);
     media = (num1+num2+num3)/3;
   printf("\nA media aritmetica e: %d\n",  media);
 getchar();
 return 0;
}