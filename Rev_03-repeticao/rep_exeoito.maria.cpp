#include <stdio.h>

int main() {
    float alturaChico = 1.5;
    float alturaZe = 1.1; 
    int anos = 0; 
   while (alturaZe <= alturaChico) {
        alturaChico += 0.02; 
        alturaZe += 0.03; 
        anos++;
    }
    printf("Serao necessarios %d anos para que Ze seja maior que Chico.\n", anos);
 getchar();
 return 0;
}
