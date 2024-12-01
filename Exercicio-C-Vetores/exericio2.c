/*Escreva um algoritmo que recebe 15 números inteiros informados
pelo usuário e os armazena em um vetor. Depois o algoritmo deve
verificar a quantidade de números pares e quantidade de números
múltiplos de 5*/

#include<stdlib.h>
#include<stdio.h>

int main () {
	int num[15];

	for(int i=0;i<15;i++){
	printf("Digite um numero:\n");
	scanf("%d", &num[i]);
	if(num[i] % 5 ==0){
		printf("[%d]: %d Numero multiplo de 5\n", i,num[i]);
	}

	if(num[i] % 2==0){
		printf("[%d]: %d Numero par\n", i, num[i]);
	}

}
return 0;
}