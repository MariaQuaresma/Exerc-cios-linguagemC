#include <stdio.h>

int main() {
    char string1[100], string2[100];
    int i;
  printf("Informe a primeira string: \n");
    scanf("%s", string1);
  printf("Informe a segunda string: \n");
    scanf("%s", string2);
 for (i = 0; string1[i] != '\0' && string2[i] != '\0'; i++) {
    if (string1[i] != string2[i]) {
        printf("\nAs strings sao diferentes!\n");
        return 0; // Sai do programa
        }
    }
  if (string1[i] == '\0' && string2[i] == '\0') {
        printf("\nAs strings sao iguais!\n"); } 
	else {
        printf("\nAs strings sao diferentes!\n");
    }
 getchar();
 return 0;
}