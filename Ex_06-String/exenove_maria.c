#include <stdio.h>
#include <string.h>

int main() {
    int i;
    char texto[1000];
 printf("Informe um texto: \n");
  gets(texto);
    for (i = 0; texto[i] != '\0'; i++) {
        if (texto[i] >= 'a' && texto[i] <= 'z') {
            if (texto[i]+3 > 'z') {
                texto[i] = 'a'+(texto[i]+3-'z'- 1); 
			} 
			  else {
                texto[i] = texto[i]+3;
            }
       } 
	   else if (texto[i] >= 'A' && texto[i] <= 'Z') {
            if (texto[i]+3 > 'Z') {
                texto[i] = 'A'+(texto[i]+3-'Z'- 1);
            } 
			else {
                texto[i] = texto[i]+3;
            }
        }
    }
    printf("\nNovo texto: %s\n", texto);
 getchar(); 
 return (0);
}