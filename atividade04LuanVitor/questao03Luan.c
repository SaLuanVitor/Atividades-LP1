#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
//3. Escreva um programa que receba três números negativos, 
//convertaos para positivos e imprima o resultado da soma desses números.

float converterParaPositivo(float numero){
    float convertido;
    convertido = numero *-1;
    return convertido;
}
float somarNumeros(float primeiroNum, float segundoNum, float terceiroNum){
	float soma;
	soma = primeiroNum + segundoNum + terceiroNum;
	return soma;
}

int main(void){
	setlocale(LC_ALL, "Portuguese");
	int i;
	float numeros[3], soma;
	
	for(i = 0; i < 3; i++){
		printf("Digite valor do %dº número: ",i+1);
		scanf("%f", &numeros[i]);
		if(numeros[i] > 0){
			numeros[i] = numeros[i] *-1;
		}
		
		numeros[i] = converterParaPositivo(numeros[i]);
		soma = soma + numeros[i];
	}
	printf("A soma dos números é: %.2f", soma);
	
}
