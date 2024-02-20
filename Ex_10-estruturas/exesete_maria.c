#include <stdio.h>
#include <math.h>

struct numComplexo {
	float parteReal;
	float parteImag;
};
int main() {
	struct numComplexo z, w;
 printf("Informe o primeiro numero complexo (parte real e parte imaginaria):\n");
   scanf("%f %f", &z.parteReal, &z.parteImag);
 printf("Informe o segundo numero complexo (parte real e parte iaginaria): \n");
   scanf("%f %f", &w.parteReal, &w.parteImag);
struct numComplexo soma, sub, produto;
 soma.parteReal = z.parteReal + w.parteReal;
 soma.parteImag = z.parteImag + w.parteImag;
  sub.parteReal = z.parteReal - w.parteReal;
  sub.parteImag = z.parteImag - w.parteImag;
   produto.parteReal = (z.parteReal * w.parteReal)-(z.parteImag * w.parteImag);
   produto.parteImag = (z.parteReal * w.parteImag)+(z.parteImag * w.parteReal);
float moduloZ =sqrt(pow(z.parteReal, 2) + pow(z.parteImag, 2));
float moduloW = sqrt(pow(w.parteReal, 2) + pow(w.parteImag, 2));
  printf("\n---Resultados---\n");
  printf("Soma: %2.f + %2.fi\n", soma.parteReal, soma.parteImag);
  printf("Subtracao: %2.f + %2.fi\n", sub.parteReal, sub.parteImag);
  printf("Produto: %2.f + %2.fi\n", produto.parteReal, produto.parteImag);
  printf("Modulo de Z: %2.f\n", moduloZ);
  printf("Modulo de W: %2.f\n", moduloW);
return 0;
}