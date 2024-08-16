/*Construir um algoritmo que calcule
a média aritmética de vários valores 
inteiros positivos, lidos externamente.
O final da leitura acontecerá quando for
lido um valor negativo.*/

#include <stdio.h>
#include <stdlib.h>

int main (void) {

    float media;
    int num, total, c;
    c, total = 0;
    
    while (num >= 0) {
    
       printf("Digite um valor (número negativo para cancelar): ");
       scanf("%d", &num);
       
       if (num >= 0) {
        
            total += num;
            c++;
       }
    }
    
    media = total / c;
    
    printf("\nA média entre os valores digitados é: %.2f.", media);

    return (0);
}