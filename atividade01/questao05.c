#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/*5- Fa�a um programa na Linguagem C, o qual dever� receber, do usu�rio, o valor do sal�rio
de um funcion�rio, calcular o sal�rio a receber, sabendo-se que o funcion�rio tem
gratifica��o de 5% sobre o sal�rio e que ser� descontado o percentual de 10% para o INSS
e 15% de IRRF, sobre o sal�rio total. Ao final, o programa dever� mostrar um
*/
#define EMPRESA "AVIACAO MUDANCAS LTDA"
#define CNPJ "10.003.234/0001-23"
#define ENDERECO "AV DAS NACOES, 382"

int main(void){
	setlocale(LC_ALL, "Portuguese");
	
	float salario, INSS, IRRF, salarioDesconto;
	
	printf("Digite o sal�rio do funcion�rio: ");
	scanf("%f", &salario);
	
	INSS = salario*0.10;
	IRRF = salario*0.15;
	salarioDesconto = salario-INSS-IRRF;
	
	printf("\nEmpresa: %s", EMPRESA);
	printf("\nEndere�o: %s", ENDERECO);
	printf("\nSalario: %.2f", (salarioDesconto*0.05)+salarioDesconto);
	printf("\nGratifica��o: %.2f", salarioDesconto*0.05);
	printf("\nIRRF: %.2f", IRRF);
	printf("\nINSS: %.2f", INSS);
	printf("\nTotal: %.2f", salario);
	
}
