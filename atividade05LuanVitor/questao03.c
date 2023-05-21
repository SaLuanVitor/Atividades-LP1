#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// 3. Implemente um programa na Linguagem de Programação C que preencha um vetor
// de 30 posições, com os valores informados pelo usuário. Após o preenchimento do
// vetor, o programa deverá atribuir valor 0 para todos os elementos que possuírem
// valores negativos. Ao final, o programa deverá mostrar na tela o vetor original e o
// vetor modificado.

int main()
{
  setlocale(LC_ALL, "Portuguese");
  int i, limite = 20;
  float vetorPrincipal[limite], vetorModificado[limite];

  for (i = 0; i < limite; i++)
  {
    printf("%d- Digite um numero: ", i + 1);
    scanf("%f", &vetorPrincipal[i]);
    if (vetorPrincipal[i] < 0)
    {
      vetorModificado[i] = 0;
    }
    else
    {
      vetorModificado[i] = vetorPrincipal[i];
    }
  }
  puts("---------------------------------------------------------------------------------");
  for (i = 0; i < limite; i++)
  {
    printf("-%d\nVetor principal [%d]: %.2f\nVetor corrigido [%d]: %.2f\n", i + 1, i, vetorPrincipal[i], i, vetorModificado[i]);
  }
  return 0;
}