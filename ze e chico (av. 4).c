/*Chico tem 1,50 metro e cresce 2 
centímetros por ano, enquanto Zé 
tem 1,10 metro e cresce 3 centímetros 
por ano. Construa um algoritmo que 
calcule e imprima quantos anos serão 
necessários para que Zé seja maior que 
Chico.*/

#include <stdio.h>
#include <stdlib.h>

int main (void) {

    float ze, chico;
    int ano;
    
    chico = 1.50;
    ze = 1.10;
    
    while (ze <= chico) {
       chico += 0.02;
       ze += 0.03;
       ano++;
    }
    
    printf("\nZé demorou %d anos para ficar maior que Chico.\n", ano);
    printf("\nAltura de Zé: %.2fm", ze);
    printf("\nAltura de Chico: %.2fm\n", chico);

    return (0);
}
