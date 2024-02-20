#include <stdio.h>

int main() {
    int x, y, z;
     printf("Digite o valor de X: ");
      scanf("%d", &x);
     printf("Digite o valor de Y: ");
      scanf("%d", &y);
     printf("Digite o valor de Z: ");
      scanf("%d", &z);
    if (x == y && y == z) {
        printf("\nTriangulo equilatero!\n"); } 
	else if (x == y || x == z || y == z) {
        printf("\nTriangulo isosceles!\n");}
	else {
        printf("\nTriangulo escaleno!\n");  }
 getchar();      
 return 0;
}