/*Escreva um algoritmo que receba uma String do usuário e imprima as quatro
primeiras letras dessa String*/

#include<stdlib.h>
#include<stdio.h>
#include<string.h>

int main(){
	char string[20];

	printf("Digite ate 20 caractereces:\n");
	scanf("%[^\n]%*c", string);

	for(int i=0;i<4;i++){
	printf("%c ", string[i]);
	}

	return 0;
}
