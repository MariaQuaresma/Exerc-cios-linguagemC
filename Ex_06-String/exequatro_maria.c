#include <stdio.h>
#include <string.h>

int main() {
	int i;
	char palavra[100];
 printf("Informe uma palavra: \n");
   gets(palavra);
 printf("\nA palavra de tras para frente: \n");
    for (i = strlen(palavra); i>=0; i--){
    	printf("%c", palavra[i]);
	}
 getchar();
 return (0);
}