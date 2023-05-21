#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// 20. Implemente um programa na Linguagem de Programação C que preencha um vetor
// de 15 posições, com os valores informados pelo usuário. Em seguida, o programa
// deverá acumular os valores do elemento anterior no posterior. Ao final, o programa
// deverá mostrar na tela o vetor original e o vetor modificado.

int main()
{
  setlocale(LC_ALL, "Portuguese");
  int i, limite = 20;
  float vetorPrincipal[limite], vetorModificado[limite];

  for (i = 0; i < limite; i++)
  {
    printf("%d- Digite um numero: ", i + 1);
    scanf("%f", &vetorPrincipal[i]);
    if (i == 0)
    {
      vetorModificado[i] = vetorPrincipal[i];
    }
    else
    {
      vetorModificado[i] = vetorModificado[i - 1] + vetorPrincipal[i];
    }
  }
  puts("---------------------------------------------------------------------------------");
  for (i = 0; i < limite; i++)
  {
    printf("-%d\nVetor principal [%d]: %.2f Vetor modificado [%d]: %.2f\n", i + 1, i, vetorPrincipal[i], i, vetorModificado[i]);
  }
  return 0;
}