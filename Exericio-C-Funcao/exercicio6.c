/*Escreva uma funçã o em C que recebe um número inteiro como parâmetro e que retorne
o fatorial desse número.*/

#include<stdlib.h>
#include<stdio.h>

int fatorial(num);

int main (){
	int n1;
	int resultado=0;
	printf("Digite um numero para calcularmos o fatorial dele ate 0:\n");
	scanf("%d", &n1);

	resultado = fatorial(n1);
	printf("O resultado do fatorial eh %d\n", resultado);
	return 0;
}

int fatorial(int num){
	int vezes = 1;
	for(int i=1; i<=num;i++){
		vezes *= i;
	}
	return(vezes);
}
