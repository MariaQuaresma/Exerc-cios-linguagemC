#include <stdio.h>

int main() {
    float nota1, nota2, media, notaExame;
      printf("Digite a primeira nota: ");
       scanf("%f", &nota1);
      printf("Digite a segunda nota: ");
       scanf("%f", &nota2);
          media = (nota1 + nota2) / 2;
    if (media >= 70) {
        printf("\nAluno aprovado com media: %.3f\n", media);} 
	else if (media >= 40 && media < 70) {
        printf("\nAluno em exame. Digite a nota do exame: ");
        scanf("%f", &notaExame);
    if (media + notaExame >= 100) {
            printf("\nAluno aprovado no exame com media: %3.f\n", media + notaExame);} 
	else {
            printf("\nAluno reprovado no exame com media: %3.f\n", media + notaExame); }
    } 
	else {
        printf("\nAluno reprovado com media: %3.f\n", media);
    }
getchar();
  return 0;
}
