#include <stdio.h>
#include <string.h>

int main() {
	int i;
	char caract[100];
 printf("Informe uma cadeia de caracteres: \n");
   gets(caract);
     for(i=0; caract[i] != '\0'; i++){
     	if(caract[i]>=97 && caract[i]<=122){
     		caract[i] -= 32;
	}
}
	 printf("\nConvercao dos caracteres para maiusculo: %s\n", caract);
 getchar();
 return (0);
}