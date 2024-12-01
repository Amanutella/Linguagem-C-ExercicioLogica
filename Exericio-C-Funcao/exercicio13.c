/*Escreva uma funçã o que recebe um valor inteiro como parâmetro e verifica se o valor é par ou
ímpar. A funçã o deve retornar 0 caso o número seja perfeito e 1 caso contrário.*/

#include<stdlib.h>
#include<stdio.h>

int perfeito(int num1){
	int perfeito;
	for(int i=1;i<num1;i++){
		if(num1 % i==0){
		perfeito += i; 
		}
	}
	
	if(perfeito == num1){
		print("O numero eh perfeito! %d", num1);
		return 0;
	}else{
		printf("O numero nao eh perfeito! %d", num1);
		return 1;
	}
	
}

int imparpar(int num){
	if(num %2==0){
		printf("Numero par %d\n", num);
	}else{
		printf("Numero impar %d\n", num);
	}
}

int main(){
	int n1;
	
	printf("Digite um numero:\n");
	scanf("%d", &n1);
	
	imparpar(n1);
	perfeito(n1);


	return 0;
}