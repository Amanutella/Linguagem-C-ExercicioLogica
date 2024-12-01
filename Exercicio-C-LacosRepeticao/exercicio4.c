/*4. Escreva um algoritmo que exiba uma mensagem com as opções "1-multiplicar","2-
somar", "3- Subtrair", "4-Dividir', "5-Sair". O seu programa deve ler a opção
desejada (1, 2, 3, 4), solicitar ao usuário que informe dois valores, executar a
operação escolhida e exibir o resultado. O programa deve ficar repetindo a
execução (ou seja, exibição das opções, leitura doa valores e exibição do
resultado), até que seja escolhida a opção sair.*/


#include <stdlib.h>
#include <stdio.h>
#include <math.h>




int main (){

    int n1, n2, resultado;
    char ope;

    do{
        printf("Digite dois valores :\n");
        scanf("%d", &n1);
        scanf("%d", &n2);

        printf("Digite a operacao que deseja realizar:\n'1-multiplicar','2-somar', '3- Subtrair', '4-Dividir', '5-Sair':\n");
        scanf(" %c", &ope);
   
        if(ope < '1' || ope >'5' ){
            printf("Erro! Digite uma operacao valida!\n");
            continue;
        }
        if(ope == '5'){
            printf("Voce saiu do programa!\n");
            break;
        }
        switch(ope){
        case'1':
            resultado = n1 * n2;
            printf("O resultado de multiplicacao eh %d\n", resultado);
            break;
            case'2':
            resultado = n1 + n2;
            printf("O resultado da soma eh %d\n", resultado);
            break;
            case'3':
            resultado = n1 - n2;
            printf("O resultado da subtracao eh %d\n", resultado);
            break;
            case '4':
            if (n2 !=0){
             resultado = (n1 / n2);
            printf("O resultado da divisao eh %d\n", resultado);
            }else {
                printf("Erro! Divisao por zero\n");
                break;
            }
        }
     }while(true);
           
    return 0;
}
