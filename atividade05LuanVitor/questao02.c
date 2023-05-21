#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// 2. Implemente um programa na Linguagem de Programação C que preencha um vetor
// de 20 posições, com os valores informados pelo usuário. Após preencher o vetor, o
// programa deverá contar quantos valores pares e impares o vetor possui, sendo que,
// ao final, os valores armazenados no vetor e as quantidades de números pares e
// ímpares deverão ser mostrados na tela

int main()
{
  int i, limite = 20, quantNumPar = 0, quantNumImpar = 0;
  int num[limite];

  for (i = 0; i < limite; i++)
  {
    printf("%d- Digite um número: ", i + 1);
    scanf("%d", &num[i]);
    if (num[i] % 2 == 0)
    {
      quantNumPar++;
    }
    else
    {
      quantNumImpar++;
    }
  }

  printf("Qunatidade de numeros pares: %d\n", quantNumPar);
  printf("Qunatidade de numeros impares: %d\n", quantNumImpar);
  for (i = 0; i < limite; i++)
  {
    printf("Número do vetor num[%d]: %d\n", i, num[i]);
  }
  return 0;
}