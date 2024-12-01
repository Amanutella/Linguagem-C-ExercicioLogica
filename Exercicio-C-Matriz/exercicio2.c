/*Altere o algoritmo anterior para que calcule a média de cada aluno e,
utilizando a média 6, informe se cada aluno está aprovado ou
reprovado.*/

#include<stdlib.h>
#include<stdio.h>

int main(){
	int notas[5][2];
	float soma=0.0, media=0.0;

	for(int i=0;i<5;i++){
        soma=0.0;
		media=0.0;
		printf("Digite as notas do aluno %d\n", i+1);
		for(int j=0;j<2;j++){
		printf("Digite a notas %d:\n", j+1);
		scanf("%d",&notas[i][j]);
		soma += notas[i][j];
		}
		media = soma /2;
		if(media >= 6){
			printf("Aluno %d Aprovado!!\n", i);
		}else{
			printf("Aluno %d Reprovado!!\n",i);
		}
		printf("\n");

	}
	return 0;
}