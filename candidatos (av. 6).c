/*Em uma eleição presidencial existem 
quatro candidatos. Os votos são informados 
através de códigos. Os dados utilizados para a 
contagem dos votos obedecem à seguinte 
codificação:

* 1,2,3,4 = voto para os respectivos candidatos;

* 5 = voto nulo;

* 6 = voto em branco;

Elabore um algoritmo que leia o código do 
candidado em um voto. Calcule e escreva:

* total de votos para cada candidato;

* total de votos nulos;

* total de votos em branco;*/

#include <stdio.h>
#include <stdlib.h>

int main (void) {
    
    int can1, can2, can3, can4, vn, vb, voto;
    can3 = 0;
    
    while (voto >= 0) {
        printf("Digite seu voto (número negativo para terminar) : ");
        scanf("%d", &voto);
        
        if (voto == 1) {
            can1++;
        }
        
        else if (voto == 2) {
            can2++;
        }
        
        else if (voto == 3) {
            can3++;
        }
        
        else if (voto == 4) {
            can4++;
        }
        
        else if (voto == 5) {
            vn++;
        }
        
        else if (voto == 6) {
            vb++;
        }
    }
    
    printf("\nO primeiro candidato recebeu %d votos.", can1);
    printf("\nO segundo candidato recebeu %d votos.", can2);
    printf("\nO terceiro candidato recebeu %d votos.", can3);
    printf("\nO quarto candidato recebeu %d votos.", can4);
    printf("\n%d votos nulos", vn);
    printf("\n%d votos em brancos", vb);
    
    

    return (0);
}