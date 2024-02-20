#include <stdio.h>

struct Funcionario {
    char nome[50];
	char sexo; 
	char cpf[12];
	char dataNascimento[11]; 
	char cargo[30];
    int idade; 
	int codigoSetor;
    float salario;
};
int main() {
    struct Funcionario func;
printf("---Digite os dados do funcionario---\n");
    printf("Nome: ");
       scanf("%s", func.nome);
    printf("Idade: ");
      scanf("%d", &func.idade);
    printf("Sexo (M/F): ");
      scanf(" %c", &func.sexo);  
    printf("CPF: ");
      scanf("%s", func.cpf);
    printf("Data de Nascimento (DD/MM/AAAA): ");
      scanf("%s", func.dataNascimento);
    printf("Codigo do Setor (0-99): ");
      scanf("%d", &func.codigoSetor);
    printf("Cargo: ");
      scanf("%s", func.cargo);
    printf("Salario: ");
      scanf("%f", &func.salario);
printf("\n---Dados do funcionario---\n");
  printf("Nome: %s\n", func.nome);
    printf("Idade: %d\n", func.idade);
      printf("Sexo: %c\n", func.sexo);
       printf("CPF: %s\n", func.cpf);
        printf("Data de Nascimento: %s\n", func.dataNascimento);
         printf("Codigo do Setor: %d\n", func.codigoSetor);
          printf("Cargo: %s\n", func.cargo);
           printf("Salario: %.2f\n", func.salario);
return 0;
}