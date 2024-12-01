//strcmp para comparacao de caracteres contando maiusculo,minusculo, espaço
#include<stdlib.h>
#include<stdio.h>
#include<string.h>//biblioteca

int main(){
	 char string1[20];
	 char string2[20];
	 int comparacao;

	 printf("Digite uma palavra com ateh 20 caracteres: \n");
	 scanf("%[^\n]%*c", string1);

	 printf("Digite uma palavra com ateh 20 caracteres: \n");
	 scanf("%[^\n]%*c", string2);

	//uso correto eh strcmp para comparacao
	 comparacao = strcmp(string1,string2);
	 if(comparacao == 0){
	 printf("Iguais!\n");
	 }else{
	 printf("Diferentes!\n");
	 }
	return 0;
}
