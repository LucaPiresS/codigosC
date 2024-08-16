/*Escreva um algoritmo que calcule a 
média aritmética das 3 notas dos alunos de 
uma classe. O algoritmo deverá ler, 
além das notas, o código do aluno e 
deverá ser encerrado quando o código for 
igual a zero.*/

#include <stdio.h>
#include <stdlib.h>


int main(void)
{
    float nota, total_nota, media;
    int c, codigo;
    codigo = -1;
    
    //repetição de alunos
    while (codigo != 0) {
        //codigo do aluno
        printf("Digite o código do aluno: ");
        scanf("%d", &codigo);
        
        //confirma se o código é diferente de 0
        if (codigo != 0) {
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
            printf("\n===========================================\n\n");
        }    
    }
    return 0;
}