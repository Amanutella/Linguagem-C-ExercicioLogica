/*Escreva um procedimento que receba como parâmetro o peso e a altura de
uma pessoa como parâmetro, calcule o seu IMC e imprima a sua classificação*/

#include<stdlib.h>
#include<stdio.h>
#include<math.h>

void classificacao(float peso, float altura);
int main(){
	float p1, a1;
	printf("Digite seu peso:\n");
	scanf("%f", &p1);
	printf("Digite sua altura:\n");
	scanf("%f", &a1);

	classificacao(p1, a1);

	return 0;
}

void classificacao(float peso, float altura){
	int imc;
	imc = peso/pow(altura,2);
	if(imc <18.5){
		printf("Condicacao Abaixo do peso!\n");
	}else if(imc >18.5 && imc <= 25){
		printf("Condicacao Peso normal!\n");
	}else if(imc > 25 && imc <=30){
		printf("Condicao Acima do peso!\n");
	}else{
		printf("Condicao Obeso!\n");
	}
}