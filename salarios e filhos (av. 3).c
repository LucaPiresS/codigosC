#include <stdio.h>
#include <stdlib.h>

int main (void) {
    float salario, maior_salario, media_salario, total_salario, salario_100, porcentagem;;
    int c, filhos, total_filhos, media_filhos;
    
    while (salario >= 0) {
        printf("Digite seu salário (número negativo para terminar): ");
        scanf("%f", &salario);
        
        if (salario >= 0) {
            //maior salario
            if (salario > maior_salario) {
                maior_salario = salario;
            }
            
            //media salarial
            total_salario += salario;
            
            //media de filhos
            printf("Quantos filhos você tem?; ");
            scanf("%d", &filhos);
            
            total_filhos += filhos;
            
            //porcentagem de salarios até R$100
            if (salario < 100) {
                salario_100++;
            }
            
            
            c++;
        }
    }
    
    media_salario = total_salario / c;
    media_filhos = total_filhos / c;
    porcentagem = salario_100 / c * 100;
    
    printf("\nA média salarial é de R$%.2f.", media_salario);
    printf("\nA média de filhos é de %d.", media_filhos);
    printf("\nO maior salário é de R$%.2f.", maior_salario);
    printf("\nA porcentagem de pessoas que ganham menos de R$100,00 é de %.2f", porcentagem);

    return(0);
}