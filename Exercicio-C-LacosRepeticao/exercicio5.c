/* 5. Escreva um programa que receba a idade e o peso de 15 pessoas. O seu
programa deve calcular e mostre as médias dos pesos das pessoas da mesma
faixa etária. As faixas etárias são: de 1 a 10 anos, de 11 a 20, de 21 a 30 anos e
maiores de 31 anos.*/

#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main (){
   
    int idade, i=0;
    double soma1=0, soma2= 0, soma3=0, soma4=0;
    double peso, media1=0, media2=0, media3=0, media4=0;
    int p1 = 0, p2= 0, p3= 0, p4 = 0;


   while(i<15) {
        printf("Digite sua idade:\n");
        scanf("%d", &idade);

        printf("Digite seu peso:\n");
        scanf("%lf", &peso);

        if(idade >=1 && idade <= 10){
            soma1+= peso;
            p1++;
        }else if (idade >= 11 && idade <= 20){
            soma2+= peso;
            p2++;
        }else if (idade >= 21 && idade <= 30){
            soma3+= peso;
            p3++;
        }else if(idade > 30){
            soma4+= peso;
            p4++;
        }
        i++;
    }
    media1 = soma1 /p1;
    media2 = soma2 /p2;
    media3 = soma3 /p3;
    media4 = soma4 /p4;

    printf("O resultado da media entre 1 a 10 anos eh %.2lf\n", media1);
    printf("O resultado da media entre 11 a 20 anos eh %.2lf\n", media2);
    printf("O resultado da media entre 21 a 30 anos eh %.2lf\n", media3);
    printf("O resultado da media mais de 30 anos eh %.2lf\n", media4);     
    return 0;
}
