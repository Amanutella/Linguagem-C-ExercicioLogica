/*Escreva um procedimento que recebe um número como parâmetro e diz se
esse número é par ou ímpar.*/

#include<stdlib.h>
#include<stdio.h>

void imparpar(int num1);
int main(){

	int n1;
	printf("Digite um numero: \n");
	scanf("%d", &n1);
	
	imparpar(n1);
	
	return 0;
}

void imparpar(int num1){
	if(num1 %2 ==0){
		printf("Numero par!\n");
	}else{
		printf("Numero impar\n");
	}
}