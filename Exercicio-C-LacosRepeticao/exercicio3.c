/*3. Escreva um programa que receba do usuário 2 valores inteiros e positivos: X e Y.
O seu programa deve calcular e escrever o valor da função potência XY utilizando
um laço de repetição (ou seja, sem utilizar a função pow).*/


#include <stdlib.h>
#include <stdio.h>


int main (){


    int x, y;
    int i=0;
    int resultado =1;


   
        printf("Digite um numero inteiro e positivo (X):\n");
        scanf("%d", &x);


        printf("Digite outro numero inteiro positivo (Y):\n"); // potencia muitos grande por ex: 50 vai resultar em 0, tem que usar 'long long' para armazenar mais
        scanf("%d", &y);
       
         while(i < y){
            resultado *= x;
            i++;
         }
        printf(" %d (X) elevado a %d (Y) eh %d", x, y, resultado);
        return 0;


    }
