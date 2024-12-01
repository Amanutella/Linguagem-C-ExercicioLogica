/*Escreva um procedimento que recebe como parâmetro as 3 notas de um
aluno por parâmetro e uma letra. Se a letra for A o procedimento calcula a
média aritmética das notas do aluno e se for P, a sua média ponderada
(pesos: 5, 3 e 2). O procedimento deve imprimir a média calculada.*/
#include<stdlib.h>
#include<stdio.h>

void media (int n1, int n2, int n3, char calculo);
int main (){
	int num1, num2, num3;
	char calc;

	printf("Digite a nota do aluno:\n");
	scanf("%d", &num1);

	printf("Digite a nota do aluno:\n");
	scanf("%d", &num2);

	printf("Digite a nota do aluno:\n");
	scanf("%d", &num3);

	printf("Digite A para media aritmetica ou P para ponderada:\n");
	scanf(" %c", &calc);

	media(num1, num2, num3,calc);
	return 0;
}

void media(int n1, int n2, int n3, char calculo){
	int media=0, soma=0;

	if(calculo == 'a'){
		soma = n1 + n2 + n3;
		media = soma /3;
		printf("A media aritmetica eh %d\n", media);
	}
	if(calculo =='p'){
		soma = (n1*5) + (n2*3) + (n3*2);
		media = soma / 3;
		printf("A media ponderada eh %d\n", media);
	}
}