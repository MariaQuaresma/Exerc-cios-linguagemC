#include <stdio.h>
#include <string.h>

int main() {
	char palav[100], substituto;
	int i, vogais=0;
 printf("Informe uma palavra: \n");
   gets(palav);
 printf("Informe um caracter para substituir pelas vogais: \n");
   scanf(" %c", &substituto);
  printf("\nA palavra sem as vogais: ");
 for(i=0; palav[i] != '\0'; i++){
    if(palav[i]=='a'||palav[i]=='e'||palav[i]=='i'||palav[i]=='o'||palav[i]=='u'||
	 palav[i]=='A'||palav[i]=='E'||palav[i]=='I'||palav[i]=='O'||palav[i]=='U'){
    		vogais++;
    		palav[i]=substituto;
		}
		else{
			printf("%c", palav[i]); }
	}
  printf("\n\nA palavra possui %d vogais\n", vogais);
  printf("\nNova palavra: %s\n", palav);
getchar();
return (0);
}