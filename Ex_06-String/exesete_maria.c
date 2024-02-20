#include <stdio.h>
#include <string.h>

int main() {
	int i;
	char palavra[50];
 printf("Informe uma palavra: \n");
   gets(palavra);
     for(i=0; palavra[i] != '\0'; i++){
     	palavra[i]+=1;
	 }
  printf("\nA palavra resultante: %s\n", palavra);
 getchar();
 return (0);
}