/*Faça uma funçã o que recebe por parâmetro a altura e o sexo
de uma pessoa e retorna o seu peso ideal.
- Homens = 72.7 x altura – 58 Mulheres = 62.1 x altura - 44.7*/

#include<stdlib.h>
#include<stdio.h>

float pesoideal(float altura, char sexo);

int main(){

	float a1;
	char s1;
	float resultado;

	printf("Iremos calcular eu peso ideal!\n");
	printf("Digite sua altura:\n");
	scanf("%f", &a1);
	printf("Digite seu sexo (f ou m):\n");
	scanf(" %c", &s1);

	resultado = pesoideal(a1, s1);

	printf("Seu peso ideal eh %.2f\n", resultado);

	return 0;
}

float pesoideal(float altura, char sexo){
	float ideal;
	if(sexo == 'f'){
		ideal = (62.1 * altura) - 44.7;
	}else if(sexo == 'm'){
		ideal = (72.7 * altura) - 58;
	}

	return ideal;
}