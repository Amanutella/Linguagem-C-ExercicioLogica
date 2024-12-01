/* 7. Escreva um algoritmo que permita fazer um levantamento do estoque de vinhos
de uma adega, que tem como dados de entrada os tipos de vinhos, sendo: “T”
para tinto; “B” para branco e “R” para rosê. A quantidade de garrafas de vinho da
adega é desconhecida. Quando a letra “F” (de fim) for informada, o programa deve
parar de receber dados e escrever a quantidade de cada tipo de vinho e a
quantidade total de vinhos na adega.*/

#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main (){
    char vinho;
    int v1=0, v2=0, v3=0, total=0;

    while(1){
    printf("Digite T para Tinto, B para Branco, R para rose e F para sair:\n");
    scanf(" %c", &vinho);

     if (vinho == 'F' || vinho == 'f'){
        printf("Você finazilou o programa!\n");
        break;
     }
    if(vinho == 'T' || vinho == 't'){
        v1++;
    }else if(vinho == 'B' || vinho == 'b'){
        v2++;
    }else if(vinho == 'R' || vinho == 'r'){
        v3++;
    }
 }
    total = v1 + v2 + v3;
    printf("A soma de vinhos tintos eh %d\n", v1);
    printf("A soma de vinhos brancos eh %d\n", v2);
    printf("A soma de vinhos roses eh %d\n", v3);
    printf("A soma total dos vinhos  %d\n", total);

    return 0;
}
