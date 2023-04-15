#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

//12. Faça um algoritmo que receba uma temperatura em Celsius e
//converta para Kelvin e Fahrenheit. O calculo é feito da seguinte
//maneira respectivamente: K = C + 273 e F = (9/5) C + 32.

int converterKelvin(int celsius){
	int k;
	k = celsius + 273;
	return k;
}

int converterFahrenheit(int celsius){
	int f;
	f = celsius*1.8+32;
	return f;
}

int main(void){
	setlocale(LC_ALL, "Portuguese");
	
	int opcao, temperatura;
	
	
	puts("Escolha:");
	puts("1 - para graus Kelvin");
	puts("2 - para graus Fahrenheit");
	puts("3 - sair");
	scanf("%d", &opcao);

	
	switch(opcao){
		case 1:
			printf("Digite quantos graus celcius deseja converter: ");
			scanf("%d", &temperatura);
			printf("%d graus celcius equivalem a %d kelvin", temperatura,  converterKelvin(temperatura));
		break;
		case 2:
			printf("Digite quantos graus celcius deseja converter: ");
			scanf("%d", &temperatura);
			printf("%d graus celcius equivalem a %d Fahrenheit", temperatura,  converterFahrenheit(temperatura));
		break;
		case 3:
		break;
	}
}
