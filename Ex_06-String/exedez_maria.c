#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, j, pol = 1; 
  printf("Informe uma string: \n");
   gets(str);
    for (i = 0, j = strlen(str) - 1; i < j; i++, j--) { 
        while (str[i] == ' ' || str[i] == ',') {
            i++;
        }
        while (str[j] == ' ' || str[j] == ',') {
            j--;
        }
        if (str[i] != str[j]) {
            pol = 0;
            break;
        }
    }
    if (pol == 1) {
        printf("\nA string e um palindromo!\n");
	}
    else {
        printf("\nA string nao e um palindromo!\n"); }
 getchar();
 return (0);
}