/*Escreva um algoritmo que calcule a média 
dos números digitados pelo usuário, se eles 
forem pares. Termine a leitura se o usuário 
digitar zero (0).
*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int num, total_num, c;
    float media;
    num = -1;
    c = 0;
    
    while (num != 0) {
    
        printf("Digite um número: ");
        scanf("%d", &num);
        
        if (num != 0) {
            if (num % 2 == 0) {
                total_num += num;
                c++;
            }
        }
    }
    
    media = total_num / c;
    
    printf("\nA média entre os números pares digitadis é: \n%.2f", media);
    return 0;
}