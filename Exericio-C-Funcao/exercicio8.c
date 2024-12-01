/*Construir uma funçã o em C que determine o maior de três números inteiros, usando a
funçã o anterior.*/

#include<stdlib.h>
#include<stdio.h>

int maior(int num1, int num2, int num3);

int main(){
	int n1, n2,n3;
	int resultado;
	printf("Digite 3 numeros para encontrarmos o numero maior!\n");
	printf("Digite o primeiro numero:\n");
	scanf("%d", &n1);
	printf("Digite o segundo numero:\n");
	scanf("%d", &n2);
	printf("Digite o terceiro numero:\n");
	scanf("%d", &n3);

	resultado = maior(n1, n2, n3);

	printf("O numero maior eh %d\n", resultado);

	return 0;
}

int maior(int num1, int num2, int num3){
	int maior1;
	if(num1 > num2 && num1 > num3){
		maior1= num1;
	}else if(num2 > num1 && num2 > num3){
		maior1 = num2;
	}else{
		maior1 = num3;
	}
	return maior1;
}