#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// 8. Implemente um programa na Linguagem de Programação C que preencha um vetor
// de 15 posições, com os valores informados pelo usuário. . Após o preenchimento, o
// programa deverá mostrar na tela:
// a. maior elemento do vetor e em que posição esse elemento se encontra.
// b. menor elemento do vetor e em que posição esse elemento se encontra.

int main()
{
  setlocale(LC_ALL, "Portuguese");
  int i, maior, menor, maior_pos, menor_pos, count = 15;
  int vetor[count];

  for (i = 0; i < count; i++)
  {
    printf("Digite o %dº elemento do vetor: ", i + 1);
    scanf("%d", &vetor[i]);
  }
  maior = vetor[0];
  menor = vetor[0];
  maior_pos = 0;
  menor_pos = 0;
  for (i = 0; i < count; i++)
  {
    if (vetor[i] > maior)
    {
      maior = vetor[i];
      maior_pos = i;
    }
    if (vetor[i] < menor)
    {
      menor = vetor[i];
      menor_pos = i;
    }
  }
  printf("\nO maior elemento do vetor é %d em vetor[%d]\n", maior, maior_pos);
  printf("O menor elemento do vetor é %d em vetor[%d]\n", menor, menor_pos);
  return 0;
}