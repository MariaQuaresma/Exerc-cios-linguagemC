#include <stdio.h>
#include <string.h>

int main() {
    char frase[100];
    int i, espacos = 0;
    printf("Informe frase: \n");
       gets(frase);
    for (i = 0; frase[i] != '\0'; i++) {
        if (frase[i] == ' ') {
            espacos++;   
        }
    }
 printf("\nA frase tem %d espacos em branco!\n", espacos);
    printf("\nFrase sem espacos: \n");
     for(i=0; frase[i] != '\0'; i++){
        if(frase[i] != ' '){
            printf("%c", frase[i]);
        }
    }
 getchar();
 return (0);
}