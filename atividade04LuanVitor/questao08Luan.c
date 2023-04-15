#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

//8. Escreva um programa que leia 500 valores inteiros e positivos e
//encontre o maior valor, o menor valor, calcule a média dos
//números lidos e , ao final, imprima os resultados.
int maiorNumero = 0, menorNumero = 0;

int maiorValor(int valorAtual, int contagem){
	if(contagem <= 0){
		maiorNumero	= valorAtual;
	}
	if(valorAtual > maiorNumero){
		maiorNumero = valorAtual;
		return maiorNumero;
	}else{
		return maiorNumero;
	}
}
int menorValor(int valorAtual, int contagem){
	if(contagem <= 0){
		menorNumero	= valorAtual;
	}
	if(valorAtual < menorNumero){
		menorNumero = valorAtual;
		return menorNumero;
	}else{
		return menorNumero;
	}
}
float calcularMedia(float soma, float quantidade){
	float media;
	media = soma/quantidade;
	return media;
}

int main(void){
	setlocale(LC_ALL, "Portuguese");
	int i, valores[500], limite = 500, maior, menor, soma;
	float media;
	puts("Apenas números inteiros e positivos:");
	for(i = 0; i < limite; i++){
		printf("Digite o %dº valor de %d: ", i+1, limite);
		scanf("%d", &valores[i]);
		if(valores[i] < 0){
			valores[i] = valores[i] * -1;
		}
		maior = maiorValor(valores[i],i);
		menor = menorValor(valores[i],i);
		soma = soma + valores[i];
	}
		media = calcularMedia(soma, limite);
		printf("Média:%.2f\n----\n", media);
		printf("maior:%d\n----\n", maior);
		printf("menor:%d\n----\n", menor);
}
