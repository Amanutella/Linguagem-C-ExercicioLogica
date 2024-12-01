/*Escreva uma funçã o que recebe um valor inteiro como parâmetro e verifica se o valor é positivo
ou negativo. A funçã o deve retornar 0 caso o número seja perfeito e 1 caso contrário.*/

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
        printf("Numero %d eh perfeito \n", num);
        return 0;
	}else{
        printf("Numero %d nao eh perfeito \n", num);
        return 1;
	}
}

int positivo(int num1){
	 if (num1 > 0) {
        printf("Numero positivo!\n");
    } else if (num1 < 0) {
        printf("Numero negativo!\n");
    } else {
        printf("O numero eh zero!\n");
    }
}


int main(){
	int n1;
	int resultado;

	printf("Digite um numero e iremos verificar se eh perfeito:\n");
	scanf(" %d",&n1);

	positivo(n1);

	resultado = perfeito(n1);

	if(resultado == 0){
        printf("Numero %d eh perfeito \n", n1);
	}else{
        printf("Numero %d nao eh perfeito \n", n1);
	}

	return 0;
}