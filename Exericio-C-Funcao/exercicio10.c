/*Faça uma funçã o que recebe por parâ metro o raio de uma esfera e
calcula o seu volume (v = 4/3 ∗ π ∗ R3).*/

#include<stdlib.h>
#include<stdio.h>
#include<math.h>

float esfera(float raio){
    #define M_PI 3.14159265358979323846
	float volume;
	volume = (4.0 / 3) * M_PI * pow(raio,3);

	return volume;
}

int main(){

	float r1;
	float resultado;
	printf("Vamos calcular o valor de uma esfera:\n");
	printf("Digite o valor do raio:\n");
	scanf("%f", &r1);

	resultado = esfera(r1);

	printf("O volume da esfera eh %.2f\n", resultado);
	return 0;
}