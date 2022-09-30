#include <stdio.h>

int main()
{
  float salario;
  int opcao;

  printf("Digite o salario: ");
  fflush(stdin);
  scanf("%f", &salario);

  printf("Digite a opcao: ");
  fflush(stdin);
  scanf("%f", &opcao);

  switch (opcao)
  {
  case 1:
    printf("Seu salario nao sofreu mudancas.\n");
    break;
  case 2:
    printf("Seu novo salario e: %.2f\n", salario * 1.05);
    break;
  case 3:
    printf("Seu novo salario e: %.2f\n", salario * 1.10);
    break;
  case 4:
    printf("Seu novo salario e: %.2f\n", salario * 1.15);
    break;
  case 5:
    printf("Seu novo salario e: %.2f\n", salario * 1.20);
    break;
  default:
    printf("Opcao invalida!");
    break;
  }

  return 0;
}