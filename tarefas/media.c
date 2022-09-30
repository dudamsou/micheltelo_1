#include <stdio.h>

int main()
{
  float numero_1;
  float numero_2;
  float numero_3;
  float media;

  printf("Digite o primeiro numero: ");
  fflush(stdin);
  scanf("%d", &numero_1);

  printf("Digite o segundo numero: ");
  fflush(stdin);
  scanf("%d", &numero_2);

  printf("Digite o terceiro numero: ");
  fflush(stdin);
  scanf("%d", &numero_3);

  media = (numero_1 + numero_2 + numero_3) / 3;

  printf("\nA media dos numeros e: %.2f\n", media);

  return 0;
}