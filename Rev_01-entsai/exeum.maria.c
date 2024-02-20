#include <stdio.h>

int main () {
    int num1, num2, num3, media;
   printf("Digite tres numeros inteiros:\n");
    scanf("%d %d %d", &num1, &num2, &num3);
   media=(num1+num2+num3)/3;
    printf("\nA media aritmdeica dos numeros e: %d", media);
 getchar();
 return 0;
}