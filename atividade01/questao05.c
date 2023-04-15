#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/*5- Faça um programa na Linguagem C, o qual deverá receber, do usuário, o valor do salário
de um funcionário, calcular o salário a receber, sabendo-se que o funcionário tem
gratificação de 5% sobre o salário e que será descontado o percentual de 10% para o INSS
e 15% de IRRF, sobre o salário total. Ao final, o programa deverá mostrar um
*/
#define EMPRESA "AVIACAO MUDANCAS LTDA"
#define CNPJ "10.003.234/0001-23"
#define ENDERECO "AV DAS NACOES, 382"

int main(void){
	setlocale(LC_ALL, "Portuguese");
	
	float salario, INSS, IRRF, salarioDesconto;
	
	printf("Digite o salário do funcionário: ");
	scanf("%f", &salario);
	
	INSS = salario*0.10;
	IRRF = salario*0.15;
	salarioDesconto = salario-INSS-IRRF;
	
	printf("\nEmpresa: %s", EMPRESA);
	printf("\nEndereço: %s", ENDERECO);
	printf("\nSalario: %.2f", (salarioDesconto*0.05)+salarioDesconto);
	printf("\nGratificação: %.2f", salarioDesconto*0.05);
	printf("\nIRRF: %.2f", IRRF);
	printf("\nINSS: %.2f", INSS);
	printf("\nTotal: %.2f", salario);
	
}
