int main(void)
{
    int c, valor, negativos;
    
    while(c < 5) {
        printf("Digite um valor: ");
        scanf("%d", &valor);
        
        if(valor < 0) {
            negativos++;
        }
        
        c++;
    }
    
    printf("\nVocê digitou %d negativos.", negativos);

    return 0;
}