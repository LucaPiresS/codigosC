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
    float nota, total_nota, media;
    int c, codigo;
    
    //repetição de alunos
    while (codigo >= 0) {
        //codigo do aluno
        printf("Digite o código do aluno: ");
        scanf("%d", &codigo);
        
        //confirma se o código é diferente de 0
        if (codigo >= 0) {
            c = 0;
            total_nota = 0;
            //media da nota
            while (c < 3 ) {
                printf("    Digite a %dª nota: ", c + 1);
                scanf("%f", &nota);
        
                total_nota += nota;
                c++;
            }
    
            media = total_nota / c;
        
            //prints
            printf("\nO aluno de código %d tem média de: %.2f\n", codigo, media);
            
            if (media >= 5) {
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