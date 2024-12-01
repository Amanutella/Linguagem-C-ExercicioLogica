/*Escreva um procedimento que recebe um número como parâmetro e diz se
esse número é primo.*/

#include<stdlib.h>
#include<stdio.h>

void primo(int num1);

int main (){
	int n1;

	printf("Digite um numero:\n");
	scanf("%d", &n1);

	primo(n1);


	return 0;
}

void primo(int num1){
	if(num1 % num1 ==0 && num1 %1 ==0){
		printf("Numero primo!\n");
	}else{
		printf("Numero nao eh primo!\n");
	}
}