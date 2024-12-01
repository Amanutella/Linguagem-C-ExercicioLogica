/*Escreva uma funçã o em C recebe dois números inteiro como parâmetro e retorne o
maior valor.*/

#include<stdlib.h>
#include<stdio.h>

int maior(int num1, int num2);

int main(){
	int n1, n2;
	int resultado;

	printf("Digite um numero:\n");
	scanf("%d", &n1);
	printf("Digite outro numero:\n");
	scanf("%d", &n2);

	resultado = maior(n1, n2);
	printf("O maior valor eh: %d", resultado);
	return 0;
}

int maior(int num1, int num2){
	int maior1;
	if(num1 > num2){
		maior1=num1;
	}else{
		maior1=num2;
	}
	return(maior1);
}