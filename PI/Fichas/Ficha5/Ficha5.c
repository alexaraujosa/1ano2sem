#include <stdio.h>
#include <math.h>

typedef struct aluno {
    int numero;
    char nome[100];
    int miniT [6];  // 20% media dos mini testes
    float teste;    // 80%
} Aluno;

int nota(Aluno a)
{
    float mediaMini = 0;
    for(int i=0 ; i<6 ; i++)
        mediaMini += a.miniT[i];
    mediaMini = mediaMini*10 / 6;   // Multiplicado por 10 para ser de 0 a 20 e não de 0 a 2

    int nota = 0.2*mediaMini + 0.8*a.teste;

    if(nota<9.5 || mediaMini < 5)
        return 0;

    return round(nota);
}

int procuraNum(int num, Aluno t[], int N)
{
    for(int i=0 ; i<N && t[i].numero <= num ; i++)
    {
        if (num == t[i].numero)
            return i;
    }

    return -1;
}

void ordenaPorNum(Aluno t [], int N)
{
    for(int i=N ; i>0 ; i--)
    {
        int auxiliar = 0;
        for(int j=0 ; j<i-1 ; j++)
            if(t[j].numero > t[j+1].numero)
            {
                Aluno auxiliar = t[j];
                t[j] = t[j+1];
                t[j+1] = auxiliar;
            }

    }
}

/*
void imprimeTurmaInd(int ind[], Aluno t[], int N)
{
    for(int i=0 ; i<N ; i++)
    {
        for(int j=0 ; j<N ; j++)
            if(i == ind[j])
                //imprimeAluno(t + j);  Falta definir a imprimeAluno
    }
}
*/

void imprimeTurma(int ind[], Aluno t[], int N)
{
    for(int i=0 ; i<N ; i++)
    {
        int indT = ind[i];
        Aluno a = t[indT];
        printf("%d | %5s | %2d \n", a.numero, a.nome, nota(a));
    }
}

void criaIndPorNome(Aluno t [], int N, int ind[])
{
    for(int i=0 ; i<N ; i++)
        ind[i] = i;
    ordenaPorNome(t, N, ind);
}



int main()
{
    return 0;
}