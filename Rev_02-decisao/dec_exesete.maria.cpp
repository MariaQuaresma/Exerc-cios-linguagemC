#include <stdio.h>

int main() {
    int horasTrabalhadas, horasNormais, horasNormais100, horasExtras, horasExtras50, horasExtras100;
    float valorHora;
    float salario;
      printf("Digite o numero de horas trabalhadas na semana: ");
       scanf("%d", &horasTrabalhadas);
      printf("\nDigite o valor da hora de trabalho: ");
       scanf("%f", &valorHora);
    if (horasTrabalhadas <= 40) {
        salario = horasTrabalhadas * valorHora;
    } else if (horasTrabalhadas <= 60) {
         horasNormais = 40;
         horasExtras = horasTrabalhadas - horasNormais;
        salario = (horasNormais * valorHora) + (horasExtras * valorHora * 1.5);
    } else {
         horasNormais = 40;
         horasExtras50 = 20;
         horasExtras100 = horasTrabalhadas - horasNormais - horasExtras50;
        salario = (horasNormais * valorHora) + (horasExtras50 * valorHora * 1.5) +(horasExtras100 * valorHora * 2);  } 
    printf("\nO salario semanal do trabalhador e: R$ %.2f\n", salario);
 getchar();
 return 0;
}
