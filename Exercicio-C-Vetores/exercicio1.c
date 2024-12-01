/*Escreva um algoritmo em C que recebe como entrada 10 números
inteiros informados pelo usuá rios e os armazena-os em um vetor.
Depois, o seu algoritmo deve calcular a soma e a média dos
números armazenados. Ao final, o seu algoritmo deve imprimir o
vetor, a soma e a média de seus elementos */

#include<stdlib.h>
#include<stdio.h>

int main() {
	int num[10];
	int soma=0, media=0;
	for(int i=0;i<10;i++){
		printf("Digite um valor:\n");
		scanf("%d", &num[i]);
		soma += num[i];
	}
	media= soma / 10;

	for(int i=0;i<10;i++){
		printf("[%d]: %d\n",i, num[i]);
	}
	printf("Soma: %d\nMedia: %d", soma, media);
	return 0;
}
