#include <stdio.h>
#include <stdlib.h>

/*2. Escrever um algoritmo que lê um valor N inteiro e positivo e que calcula e escreve o valor de E.

E = 1 + 1 / 1! + 1 / 2! + 1 / 3! + 1 / N!*/

int main (void) {
    
    int fat, n, c;
    float E;
    fat = 1;
    
    printf("Digite um valor para N: ");
    scanf("%d", &n);
    
    while(n >= 1) {
        fat *= n;
        n -= 1;
    }
    
    E = 1 + 1 / 1 + 1 / 2 + 1 / 6 / fat;
    
    printf("\nO valor de E é: %.2f", E);

    return(0);
}