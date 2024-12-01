/*• Concatena duas strings (junçao)
• Uso: strcat( str1, str2 );
• O resultado da concatenação é armazenado na primeira string*/

#include<stdlib.h>
#include<stdio.h>
#include<string.h>

int main(){

	char string1[20];
	char string2[20];

	printf("Digite uma palavra:\n");
	scanf("%[^\n]%*c", string1);

	printf("Digite uma palavra:\n");
	scanf("%[^\n]%*c", string2);

	strcat(string1, string2);

	printf("A palavra copiada eh: %s", string1);

	return 0;
}