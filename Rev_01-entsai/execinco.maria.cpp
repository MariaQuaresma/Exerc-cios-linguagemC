#include <stdio.h>

int main() {
 float c, f;
     printf("Digite a temperatura em centigrados: ");
     scanf("%f", &c);
    f=(9 *c + 160)/5;
 printf("\nResultado da conversao de centigrados para fahrenheit e: %f\n", f);
getchar ();
return 0;
}