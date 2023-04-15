#include<stdlib.h>
#include<stdio.h>
#include<locale.h>

/*2-Desenvolva um programa na Linguagem C que contenha um procedimento que
recebe a idade de um nadador por parâmetro e retorna, também por parâmetro, a
categoria desse nadador de acordo com a tabela abaixo:
Idade Categoria
5-7 anos Infantil A
8-10 anos Infantil B
11-13 anos Juvenil A
14-17 anos Juvenil B
> de 18 anos Adulto
Ao final, o programa deverá imprimir uma mensagem, identificando a categoria do
nadados. Caso a idade seja inferior ao especificado na tabela, uma mensagem
também deverá ser impressa.*/


int main(void){
	setlocale(LC_ALL, "Portuguese");
	
	int idade;
	
	printf("Digite a idade do nadador: ");
	scanf("%d", &idade);
	if(idade >= 5){
	printf("Nadador(a) irá concorrer na categoria: \n");
	};
	obterCategoria(idade);
	return 0;
}


int definirCategoria(int idade){
	char
	 categoria[50], 
	 categoriaAInfatil[11] = {"Infantil A"},
	 categoriaBInfatil[11] = {"Infantil B"}, 
	 categoriaAJuvenil[11] = {"Juvenil A"}, 
	 categoriaBJuvenil[11] = {"Juvenil B"}, 
	 categoriaAdulto[6] = {"Adulto"},
	 semCategoria[50] = {"Criaça abaixo da idade minima permitida"};
	 int i;
	
	if(idade >= 5 && idade <= 7){
		for(i = 0; i < 11; i++){
			categoria[i] = categoriaAInfatil[i];
		}
	}else if(idade >= 8 && idade <= 10){
		for(i = 0; i < 11; i++){
			categoria[i] = categoriaBInfatil[i];
		}
	}else if(idade >= 11 && idade <= 13){
		for(i = 0; i < 11; i++){
			categoria[i] = categoriaAJuvenil[i];
		}
	}else if(idade >= 14 && idade <= 17){
		for(i = 0; i < 11; i++){
			categoria[i] = categoriaBJuvenil[i];
		}
	}else if(idade > 18){
		for(i = 0; i < 6; i++){
			categoria[i] = categoriaAdulto[i];
		}
	}else{
		for(i = 0; i < 50; i++){
			categoria[i] = semCategoria[i];
		}
	}
	
	return printf("%s", categoria);
}
