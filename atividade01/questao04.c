#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/*4- Fa�a um programa na Linguagem C, o qual dever� receber, do usu�rio, o sal�rio de um
funcion�rio e que atribua um aumento de 25% ao sal�rio informado. Ap�s os c�lculos,
mostrar os valores do sal�rio atual e do valor do aumento.*/

int main(void){
	setlocale(LC_ALL, "Portuguese");
	
	float salario;
	
	printf("Digite o valor do sal�rio do funcion�rio: ");
	scanf("%f", &salario);
	
	printf("O sal�rio de R$%.2f \npassou a ser R$%.2f \ncom o aumento de 25%%, \no funcion�rio obteve R$%.2f a mais do sal�rio base. ", salario, (salario*0.25)+salario, salario*0.25);
	
	
}
