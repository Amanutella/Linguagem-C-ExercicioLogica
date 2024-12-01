//string para guardar ate 20 caracteres com a biblioteca string.h
/*Verifica a quantidade de caracteres sem contar o '\0'*/
#include<stdlib.h>
#include<stdio.h>
#include<string.h>//biblioteca

int main(){
	 char string[20];
	 int tam;
	 
	 printf("Digite uma palavra com ateh 20 caracteres: \n");
	 scanf("%[^\n]%*c", string);
	 tam = strlen(string);
	 printf("A string digitada tem %d caracteres", tam);
	return 0;
}