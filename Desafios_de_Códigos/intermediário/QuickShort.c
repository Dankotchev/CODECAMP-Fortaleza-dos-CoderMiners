#include <stdio.h>
#include <stdlib.h>

/*
    Implementação do QuickSort em C
    Autor: Marcos Castro - www.GeeksBR.com
    Alterado para não utilizar um pivo aleatório.
*/

void troca(int vet[], int i, int j)
{
    int aux = vet[i];
    vet[i] = vet[j];
    vet[j] = aux;
}

int particiona(int vet[], int inicio, int fim)
{
    int pivo, pivo_indice, i;
    pivo = vet[fim];
    pivo_indice = inicio;

    for (i = inicio; i < fim; i++)
    {
        if (vet[i] <= pivo)
        {
            troca(vet, i, pivo_indice);
            pivo_indice++;
        }
    }
    troca(vet, pivo_indice, fim);
    return pivo_indice;
}

void quickSort(int vet[], int inicio, int fim)
{
    if (inicio < fim)
    {
        int pivo_indice = particiona(vet, inicio, fim);

        quickSort(vet, inicio, pivo_indice - 1);
        quickSort(vet, pivo_indice + 1, fim);
    }
}

int main()
{
    // Lê os nossos dados de entrada:
    int quantidade;
    scanf("%d", &quantidade);
    int joias[quantidade];
    for (int i = 0; i < quantidade; i++)
    {
        scanf("%d", &joias[i]);
    }

    int inicio = 0;
    int fim = quantidade - 1;
    // Executa o algoritmo "quickSort" para ordenar as "joias".
    quickSort(joias, inicio, fim);

    // Imprime as "joias" ordenadas.
    for (int i = 0; i < quantidade; i++)
    {
        printf("%d ", joias[i]);
    }

    return 0;
}