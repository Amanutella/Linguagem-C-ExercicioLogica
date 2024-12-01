
/*1. Escreva um programa em C que receba do usuário a idade, o peso e o sexo de
10 pessoas. Por fim, o seu algoritmo deve imprimir:
a. O total de homens;
b. O total de mulheres;
c. A soma e a média das idades dos homens;
d. A soma e a média dos pesos das mulheres.*/


#include <stdlib.h>
#include <stdio.h>
#include <math.h>


int main (){


    int i = 1, num_homens = 0, num_mulheres = 0;
    int idade;
    double peso, mediam =0 , mediaf = 0, somai = 0, somap = 0;
    char sexo;


    while(i<=10){
       
        printf("Digite seu sexo (M ou F):\n");
        scanf(" %c", &sexo);


        printf("Digite sua idade:\n");
        scanf("%d", &idade);


        printf("Digite seu peso: \n");
        scanf("%lf", &peso);


        if(sexo == 'M' || sexo == 'm'){
            num_homens++;
            somai += idade;
        }else
            if (sexo == 'F' || sexo == 'f'){
            num_mulheres++;  
            somap += peso;      
        }
    i++;
    }
    if(num_homens > 0){
        mediam = somai / num_homens;
        }
    if(num_mulheres > 0){
        mediaf = somap / num_mulheres;
    }




    printf("O total de homens eh %d\n", num_homens);
    printf("O total de mulheres eh %d\n", num_mulheres);
    printf("A soma das idade dos homens eh %.2lf e a media eh %.2lf\n", somai, mediam);
    printf("A soma dos pesos das mulheres eh %.2lf e a media eh %.2lf\n", somap, mediaf);


return 0;
}
