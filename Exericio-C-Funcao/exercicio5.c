/*Escreva uma função que recebe um número inteiro como parâmetro e retorna a soma
de 0 até o número informado.*/

#include<stdlib.h>
#include<stdio.h>

int soma(int num);

int main (){
	int n1;
	int resultado;
	printf("Digite um numero para somarmos de 0 ateh ele:\n");
	scanf("%d", &n1);
	resultado = soma(n1);
	printf("Resultado da soma: %d\n", resultado);
	return 0;
}

int soma(int num){
	int soma=0;
	for(int i=0;i<=num;i++){
		soma += i;
	}
	return(soma);
}
