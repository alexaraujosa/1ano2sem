#include <stdio.h>

int pertence(int arr[], int tamanho, int valor)
{
    for(int i=0 ; i<tamanho ; i++)
    {
        if(arr[i] == valor)
            return 1;
    }

    return 0;
}



int main()
{
    int casos, guiches_qnt, guiche_inicio, guiche_atual;

    if(scanf("%d", &casos)){}
    int resultado[casos][100];
    for(int caso=0 ; caso<casos ; caso++)
    {
        if(scanf("%d", &guiches_qnt)){}
        if(scanf("%d", &guiche_inicio)){}
        guiche_atual = guiche_inicio;
        int guiches[100], guiches_historico[100];

        for(int j=0 ; j<100 ; j++)
        {
            guiches[j] = -1;
            guiches_historico[j] = -1;
            resultado[caso][j] = -1;
        }

        for(int j=0 ; j<guiches_qnt ; j++)
            if(scanf(" %d", &guiches[j])){}
    
        resultado[caso][0] = guiche_inicio; // printf("%d ", guiche_inicio);
        guiches_historico[0] = guiche_inicio;
        for(int j=0 ; j<100 ; j++)
        {
        
            if(guiches[guiche_atual - 1] == 0){
                resultado[caso][j+1] = 0; //putchar('\n');
                break;
            }

            else if(pertence(guiches_historico, 100, guiches[guiche_atual - 1]) == 0)
            {
                guiches_historico[j+1] = guiches[guiche_atual - 1];
                resultado[caso][j+1] = guiches[guiche_atual - 1]; //printf("%d ", guiches[guiche_atual - 1]);
                guiche_atual = guiches[guiche_atual - 1];
            }

            else
            {
                resultado[caso][j+1] = -2; //printf("CICLO INFERNAL\n");
                break;
            }
    
        }

    }
    
    
    
    
    
    for(int caso=0 ; caso<casos ; caso++)
    {
        for(int j=0 ; j<100 ; j++)
        {
            if(resultado[caso][j] == -1)
                break;
            else if(resultado[caso][j] == 0)
            {
                putchar('\n');
                break;
            }
            else if(resultado[caso][j] == -2)
            {
                printf("CICLO INFERNAL\n");
                break;
            }
            else
                printf("%d ", resultado[caso][j]);
        }
    }

    return 0;
}