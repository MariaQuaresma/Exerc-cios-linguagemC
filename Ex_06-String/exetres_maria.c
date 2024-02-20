#include <stdio.h>
#include <string.h>

int main(){
	int i, cont=0;
	char string[100];
 printf("Informe um numero: \n");
   scanf("%s", &string);
    for(i=0; string[i] != '\0'; i++){
    	if(string[i] == '1'){
    		cont++;
		}
	}
	printf("\nNumeros de 1s na string e: %d\n", cont);
 getchar();
 return (0);
}