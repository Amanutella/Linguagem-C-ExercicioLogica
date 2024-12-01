/*Utiliza strcpy para colar a copiar e colar da string1 na string2*/
#include<stdlib.h>
#include<stdio.h>
#include<string.h>

int main(){

	char string1[20];
	char string2[20];

	printf("Digite uma palavra:\n");
	scanf("%[^\n]%*c", string1);

	strcpy(string2, string1);

	printf("A palavra copiada eh: %s", string2);

	return 0;
}