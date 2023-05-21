#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// 6. Implemente um programa na Linguagem de Programação C que preencha um vetor
// de 15 posições, com os valores informados pelo usuário. Após o preenchimento, o
// programa deverá copiar o conteúdo do vetor em um segundo vetor, sendo a cópia
// preenchida de forma invertida. Ao final, o programa deverá mostrar na tela o vetor
// original e o vetor modificado.

int main()
{
  setlocale(LC_ALL, "Portuguese");
  int i, j, count = 15;
  int vetorPadrao[count];
  int vetorInvertido[count];

  for (i = 0; i < count; i++)
  {
    printf("Digite um numero: ");
    scanf("%d", &vetorPadrao[i]);
  }
  i = 0;
  for (j = count; j > 0; j--)
  {
    vetorInvertido[i] = vetorPadrao[j - 1];
    i++;
  }
  for (i = 0; i < count; i++)
  {
    printf("Invertido: %d  Normal: %d\n", vetorInvertido[i], vetorPadrao[i]);
  }
}