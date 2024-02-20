#include <stdio.h>
#include <string.h>

int main() {
    char nome[5]; 
    int i;
 printf("Informe um nome com ate 4 letras: ");
  scanf("%4s", nome);
    for (i=0; nome[i] != '\0'; i++) {
        printf("%c", nome[i]);
    }
 getchar();
 return(0);
}