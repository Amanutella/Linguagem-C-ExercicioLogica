/*Escreva um algoritmo que receba uma String do usuário e imprima as letras das
posições ímpares*/

#include<stdlib.h>
#include<stdio.h>
#include<string.h>

int main(){
	char string[20];

	printf("Digite ate 20 caractereces:\n");
	gets(string);

	printf("O texto digitado eh %s\n", string);
	printf("Os caracteres do texto impares sao:\n");
	for(int i=1;i<strlen(string);i+=2){
	if(i%2 !=0){
	printf("Posicao %d eh %c \n", i, string[i]);
	}
	}

	return 0;
}
