/*Escrever um algoritmo que leia 20 valores 
para uma variável n e, para cada um deles, 
calcule a tabuada de 1 até n. Mostre a 
tabuada na forma:

1 x n = n

2 x n = 2n

3 x n = 3n

.......

n x n = n2*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int num, tabuada, c;
    c = 1;
    tabuada = 1;
    
    while (tabuada <= 20) {
    
        printf("Digite o %d° número para ver sua tabuada: ", tabuada);
        scanf("%d", &num);
    
        while (c <= num) {
            printf("\n%d X %d = %d\n", c, num, c * num);
            c++;
        }
        
        printf("=======================================\n");
        
        tabuada++;
        c = 1;
    }
    
    return 0;
}