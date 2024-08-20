/*Escreva um algoritmo que leia o 
código de um aluno e suas três notas. 
Calcule a média ponderada do aluno, 
considerando que o peso para a maior 
nota seja 4 e para as duas restantes, 
3. Mostre o código do aluno, suas três 
notas, a média calculada e uma mensagem 
"APROVADO" se a média for maior ou igual a 
5 e "REPROVADO" se a média for menor que 5. 
Repita a operação até que o código lido seja 
negativo.*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    float nota, nota1, nota2, nota3, media_ponderada;
    int codigo;
    
    //repetição de alunos
    while (codigo >= 0) {
        //codigo do aluno
        printf("Digite o código do aluno: ");
        scanf("%d", &codigo);
        
        //confirma se o código é diferente de 0
        if (codigo >= 0) {
            //media da nota
            printf("\nDigite a 1º nota do aluno: ");
            scanf("%f", &nota1);
            printf("\nDigite a 2º nota do aluno: ");
            scanf("%f", &nota2);
            printf("\nDigite a 3º nota do aluno: ");
            scanf("%f", &nota3);
            
            //media
            media_ponderada = ((4*nota1) + (3*nota2) + (3*nota3)) / (4+3+3);
        
            //prints
            printf("\nO aluno de código %d tem média ponderada de: %.2f\n", codigo, media_ponderada);
            
            if (media_ponderada >= 5) {
                printf("\nAPROVADO!!!");
            }
            
            else {
                printf("REPROVADO!!");
            }
            
            printf("\n===========================================\n\n");
        }    
    }
    
    return 0;
}
