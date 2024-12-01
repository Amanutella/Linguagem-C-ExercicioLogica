/*Escreva um algoritmo em C que cria uma matriz de 5 linhas e 2
colunas para armazenar as notas de dois bimestres de 5 alunos. O
valor das notas a serem armazenadas devem ser informados pelo
usuário.*/

#include<stdlib.h>
#include<stdio.h>

int main () {
	int notas[5][2];
	
	for(int bim=0;bim<2;bim++){
		printf("Digite a nota Bimestre %d:\n", bim+1);
		for(int i=0;i<5;i++){
			for(int j=0;j<3;j++){
			printf("Digite a nota do aluno %d:\n", i+1);
			scanf("%d", &notas[i][j]);
			}
		}
	}
	for(int bim=0;bim<2;bim++){
		printf("Notas dos alunos Bimistre %d\n", bim+1);
		for(int i=0;i<5;i++){
            printf("Nota do aluno %d:\n", i+1);
			for(int j=0;j<3;j++){
			printf("Nota %d: %d\n", j + 1, notas[i][j]);
			}
		}
	}
	
	return 0;
}