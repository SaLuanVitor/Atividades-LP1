#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

//11. Escreva um programa que leia um número n (número de termos
//de uma progressão aritmética), a1 ( o primeiro termo da
//progressão) e r (a razão da progressão). Ao final, calcular e
//imprimir os n termos desta progressão, bem como a soma dos seus
//elementos.

float nezimoTermo(float a1, float n, float r){
	float an;
	an = (a1 + (n - 1) * r);
	return an;
}
float somaElementos(float a1, float an){
	float Sn;
	Sn = (a1 + an)/2;
	return Sn;
}


int main(void){
	setlocale(LC_ALL, "Portuguese");
	
	float a1,r,an,Sn,q;
    int op,n;
    
    printf("\tProgressao Aritmetica - PA\n");
    printf("\nEntre com o valor do primeiro termo: ");
    scanf("%f",&a1);
    
    printf("\nEntre com o valor da razao: ");
    do{ 
		scanf("%f",&r);
    }while(r==0);   
	 
    printf("\nNumero de termos: ");
    do{ 
		scanf("%i",&n);
    }while(n<=0); 
	   
    an = nezimoTermo(a1, n, r);
    Sn = somaElementos(a1,an);
    printf("\n\nE-nesimo termo da P.A. - an: %.2f\n\n",an);
    printf("A Soma do termos da P.A. - Sn: %.2f\n\n",Sn);
          
}
