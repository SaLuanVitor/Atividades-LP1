#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

//2. Escreva um programa que receba quatro valores (a, b, c e d) e
//imprima o valor de "a":
//a) Somado ao segundo termo.
//b) Multiplicado pelo terceiro termo.
//c) Dividido pelo quarto termo.
float somarTermo(float primeiro, float segundo){
	float soma;
	soma = primeiro + segundo;
	return soma;
}
float multiplicaTermo(float primeiro, float segundo){
	float multiplica;
	multiplica = primeiro * segundo;
	return multiplica;
}
float divideTermo(float primeiro, float segundo){
	float divide;
	divide = primeiro/segundo;
	return divide;
}

int main(void){
	setlocale(LC_ALL, "Portuguese");
	float a, b, c, d;
	
	printf("Digite o valor do termo a: ");
	scanf("%f", &a);
	printf("Digite o valor do termo b: ");
	scanf("%f", &b);
	printf("Digite o valor do termo c: ");
	scanf("%f", &c);
	printf("Digite o valor do termo d: ");
	scanf("%f", &d);
	
	b = somarTermo(a,b);
	c = multiplicaTermo(a,c);
	d = divideTermo(a,d);
	
	printf("A soma do termo a com o termo b é: %.2f\n",b);
	printf("A multiplicação do termo a com o termo c é: %.2f\n",c);
	printf("A divisão do termo a com o termo d é: %.2f\n",d);
}
