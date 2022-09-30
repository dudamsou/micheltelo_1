#include <stdio.h>

int main()
{
  int conta;
  int senha;
  int opcao;
  float saldo = 4000.00;
  float quantidade;

  printf("Digite o numero da conta: ");
  fflush(stdin);
  scanf("%d", &conta);

  printf("Digite a senha: ");
  fflush(stdin);
  scanf("%d", &senha);

  if (conta == 12345 && senha == 54321)
  {
    printf("\nSeu saldo eh: %.2f\n", saldo);

    printf("Deseja fazer um saque ou deposito? (1 - saque | 2 - deposito)\n");
    fflush(stdin);
    scanf("%d", &opcao);

    if (opcao == 1)
    {
      printf("Digite a quantidade que deseja sacar: ");
      fflush(stdin);
      scanf("%f", &quantidade);

      if (quantidade < 0)
      {
        printf("Voce nao pode sacar um valor negativo.\n");
      }
      else if (quantidade > saldo)
      {
        printf("Voce nao tem saldo suficiente para sacar.\n");
      }
      else
      {
        saldo = saldo - quantidade;
      }
    }
    else if (opcao == 2)
    {
      if (quantidade < 0)
      {
        printf("Voce nao pode depositar um valor negativo.\n");
      }
      else
      {
        printf("Digite a quantidade que deseja depositar: ");
        fflush(stdin);
        scanf("%f", &quantidade);

        saldo = saldo + quantidade;
      }

      printf("\nSeu saldo eh: %.2f\n", saldo);
    }
  }
  return 0;
}