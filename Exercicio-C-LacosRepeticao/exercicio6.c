/*6. Escreva um programa que receba valores inteiros o usuário até que o valor -99
seja digitado. Quando isso acontecer o programa deverá escrever a soma e a
média dos valores recebidos anteriormente.*/

#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main (){
   
    double soma=0, media=0, num=0;
    int c=0;

    while(num != -99){
        printf("Digite valores inteiros! Digite -99 para finalizar o calculo\n");
        scanf("%lf", &num);
        if(num !=-99){
            soma+=num;
            c++;
        }
    }
        media = soma/c;
        
    printf("A media dos valores %.2lf\n", media);
    return 0;
}