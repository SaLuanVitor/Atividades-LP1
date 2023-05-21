#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// 9. Implemente um programa na Linguagem de Programação C que preencha um vetor
// de 10 posições, com os valores informados pelo usuário. Após o preenchimento, o
// programa deverá copiar o conteúdo do vetor em um segundo vetor, substituindo os
// valores negativos, que porventura estejam armazenados no vetor original, por 1. Ao
// final, o programa deverá mostrar na tela o vetor original e o vetor modificado.

int main()
{
  setlocale(LC_ALL, "Portuguese");
  int i, count = 5;
  int vetor[count];
  for (i = 0; i < count; i++)
  {
    printf("Digite o %dº valor: ", i + 1);
    scanf("%d", &vetor[i]);
  }
  int vetor_modificado[count];
  for (i = 0; i < count; i++)
  {
    if (vetor[i] < 0)
    {
      vetor_modificado[i] = 1;
    }
    else
    {
      vetor_modificado[i] = vetor[i];
    }
  }
  printf("\n\nO vetor original é:\n");
  for (i = 0; i < count; i++)
  {
    printf("%d ", vetor[i]);
  }
  printf("\n\nO vetor modificado é:\n");
  for (i = 0; i < count; i++)
  {
    printf("%d ", vetor_modificado[i]);
  }
  return 0;
}