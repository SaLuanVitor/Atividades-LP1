#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/*4- Faça um programa na Linguagem C, o qual deverá receber, do usuário, o salário de um
funcionário e que atribua um aumento de 25% ao salário informado. Após os cálculos,
mostrar os valores do salário atual e do valor do aumento.*/

int main(void){
	setlocale(LC_ALL, "Portuguese");
	
	float salario;
	
	printf("Digite o valor do salário do funcionário: ");
	scanf("%f", &salario);
	
	printf("O salário de R$%.2f \npassou a ser R$%.2f \ncom o aumento de 25%%, \no funcionário obteve R$%.2f a mais do salário base. ", salario, (salario*0.25)+salario, salario*0.25);
	
	
}
