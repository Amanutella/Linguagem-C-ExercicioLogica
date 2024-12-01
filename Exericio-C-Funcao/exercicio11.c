/*Faça uma funçã o que recebe um número como parâmetro e verifique se um ele é perfeito ou
não . Um valor é dito perfeito quando ele é igual a soma dos seus divisores excetuando ele
próprio. (Ex: 6 é perfeito, 6 = 1 + 2 + 3, que são seus divisores). A funçã o deve retornar 0 caso o
número seja perfeito e 1 caso contrário.*/

#include<stdlib.h>
#include<stdio.h>

int perfeito(int num){
	int result=0;
	for(int i=1; i<num;i++){
		if(num % i==0){
		result += i;
		}

	}
	if(result == num){
        return 0;
	}else{
        return 1;
	}
}
int main(){
	int n1;
	int resultado;

	printf("Digite um numero e iremos verificar se eh perfeito:\n");
	scanf(" %d",&n1);

	resultado = perfeito(n1);

	if(resultado == 0){
        printf("Numero %d eh perfeito \n", n1);
	}else{
        printf("Numero %d nao eh perfeito \n", n1);
	}

	return 0;
}