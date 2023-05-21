#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// 7. Implemente um programa na Linguagem de Programação C que preencha um vetor
// de 30 posições, com os valores informados pelo usuário. Após o preenchimento, o
// programa deverá mostrar na tela somente os números positivos armazenados no
// vetor.

int main()
{
  setlocale(LC_ALL, "Portuguese");
  int i, count = 30;
  int vetorComp[count];

  for (i = 0; i < count; i++)
  {
    printf("Digite o número de elementos: ");
    scanf("%d", &vetorComp[i]);
  }
  for (i = 0; i < count; i++)
  {
    if (vetorComp[i] > 0)
    {
      printf("%d\n", vetorComp[i]);
    }
  }
}