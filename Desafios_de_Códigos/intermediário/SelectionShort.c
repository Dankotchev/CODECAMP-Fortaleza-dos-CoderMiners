#include <stdio.h>

void trocar(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void selectionSort(int array[], int quantidade)
{
    int atual, proximo;
    int maiorValor;

    for (atual = 0; atual < (quantidade - 1); atual++)
    {
        maiorValor = atual;
        for (proximo = (atual + 1); proximo < quantidade; proximo++)
        {
            if (array[proximo] > array[maiorValor])
            {
                maiorValor = proximo;
            }
        }
        if (atual != maiorValor)
        {
            trocar(&array[atual], &array[maiorValor]);
        }
    }
}

int main()
{
    // Lê os nossos dados de entrada:
    int quantidade;
    scanf("%d", &quantidade);
    int armaduras[quantidade];
    for (int i = 0; i < quantidade; i++)
    {
        scanf("%d", &armaduras[i]);
    }

    // Executa o algoritmo "selectionSort" para deixar as "armaduras" em ordem DECRESCENTE.
    selectionSort(armaduras, quantidade);

    // Imprime as "armaduras" ordenados.
    for (int i = 0; i < quantidade; i++)
    {
        printf("%d ", armaduras[i]);
    }

    return 0;
}