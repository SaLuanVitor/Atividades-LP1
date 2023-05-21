#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// 1. Implemente um programa na Linguagem de Programação C que preencha um vetor
// de 20 posições, com os valores informados pelo usuário. Após o preenchimento, o
// programa deverá solicitar um valor qualquer ao usuário, realizar uma busca no vetor
// e informar se o valor foi encontrado, mostrando a posição no vetor, ou se não foi
// encontrado

int main()
{
  setlocale(LC_ALL, "Portuguese");
  int i, limite = 20, posicaoVetor = -1;
  float num[limite], numComp;

  for (i = 0; i < limite; i++)
  {
    printf("%d- Digite um número: ", i + 1);
    scanf("%f", &num[i]);
  }
  printf("Digite o número que deseja procurar: ");
  scanf("%f", &numComp);

  for (i = 0; i < limite; i++)
  {
    if (num[i] == numComp)
    {
      posicaoVetor = i;
      printf("O número %.2f está no vetor num[%d]", num[i], i);
    }
  }
  if (posicaoVetor < 0)
  {
    printf("Não há vetores com esse valor");
  }
  return 0;
}