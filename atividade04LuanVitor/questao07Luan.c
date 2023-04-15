#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

//7. Faça um algoritmo que receba a altura e o peso de uma pessoa e
//imprima seu IMC (Índice de massa corporal). O calculo é feito da
//seguinte maneira: IMC = peso / altura².
float calculaIMC(float peso, float altura){
	float imc;
	imc = peso/(altura*altura);
	return imc;
}

int main(void){
	setlocale(LC_ALL, "Portuguese");
	float peso, altura;
	
	printf("Digite o peso da pessoa em KG: ");
	scanf("%f", &peso);
	printf("Digite a altura da pessoa em metros: ");
	scanf("%f", &altura);
	
	printf("O seu IMC é: %.2f", calculaIMC(peso, altura));
}
