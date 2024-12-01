/*2. Escreva um programa que receba do usuário 10 valores inteiros e positivos e:
a. Encontre e imprima o maior valor;
b. Encontre e imprima o menor valor;
c. Calcule a média dos números lidos.*/


#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>


int main (){


    int maior, menor, i=1;
    int num_digitado;
    double soma = 0, media = 0;
    bool passou = true;
    while(i <= 10){
        printf("Digite um numero inteiro:\n");
        scanf("%d", &num_digitado);


        soma+= num_digitado;


        if(passou){
            maior = num_digitado;
            menor = num_digitado;
            passou = false;
        }


        if(num_digitado <0){
            printf("Numero negativo! Volte e digite numero inteiro!\n");
		return 1;
        }else if (num_digitado < menor){
            menor = num_digitado;
        }


        if(num_digitado > maior){
            maior = num_digitado;
        }
        i++;
        }
        media = soma / 10;
        printf("O numero maior eh %d\n", maior);
        printf("O numero menor eh %d\n", menor);
        printf("A media dos numero digitados eh %.2lf", media);
        return 0;


    }
