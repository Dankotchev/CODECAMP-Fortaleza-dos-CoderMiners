#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define TAM 20

void bubbleSort(int *array, int quantidade)
{
    int i, j;              // Percorrer os laços de repetição passando por todas posições
    int auxiliar;          // Auxiliar, para realizar a troca de valores
    for (i = quantidade - 1; i > 0; i--)
    {
        for (j = 0; j < i; j++)
        {
            if (array[j] > array[j + 1])
            {
                auxiliar = array[j];
                array[j] = array[j + 1];
                array[j + 1] = array;
            }
        }
    }
}

void troca(int vet[], int i, int j)
{
	int aux = vet[i];
	vet[i] = vet[j];
	vet[j] = aux;
}

int particiona(int vet[], int inicio, int fim)
{
	int pivo, pivo_indice, i;
	
	pivo = vet[fim]; // o pivô é sempre o último elemento
	pivo_indice = inicio;
	
	for(i = inicio; i < fim; i++)
	{
		// verifica se o elemento é <= ao pivô
		if(vet[i] <= pivo)
		{
			// realiza a troca
			troca(vet, i, pivo_indice);
			// incrementa o pivo_indice
			pivo_indice++;
		}
	}
	
	// troca o pivô
	troca(vet, pivo_indice, fim);
	
	// retorna o índice do pivô
	return pivo_indice;
}

// escolhe um pivô aleatório para evitar o pior caso do quicksort
int particiona_random(int vet[], int inicio, int fim)
{
	// seleciona um número entre fim (inclusive) e inicio (inclusive)
	int pivo_indice = (rand() % (fim - inicio + 1)) + inicio;
	
	// faz a troca para colocar o pivô no fim
	troca(vet, pivo_indice, fim);
	// chama a particiona
	return particiona(vet, inicio, fim);
}

void quickSort(int vet[], int inicio, int fim)
{
	if(inicio < fim)
	{
		// função particionar retorna o índice do pivô
		int pivo_indice = particiona(vet, inicio, fim);

		
		// chamadas recursivas quickSort
		quickSort(vet, inicio, pivo_indice - 1);
		quickSort(vet, pivo_indice + 1, fim);
	}
}






void apresentarVetor(int *vetor)
{
    for (int i = 0; i < TAM; i++)
    {
        printf("%04d ", vetor[i]);
    }
    printf("\n________________\n");
}

void inserirAleatorio(int *vetor)
{
    for (int i = 0; i < TAM; i++)
    {
        vetor[i] = rand() % 1000 + 1;
    }
}

int gerirMenu()
{
    int op;
    printf("\n----------\n\tESCOLHA O METODO DE ORDENACAO DESEJADO");
    printf("\n1 -\tBubble Sort");
    printf("\n2 -\tSelect Sort");
    printf("\n3 -\tInsert Sort");
    printf("\n4 -\tShell  Sort");
    printf("\n5 -\tHeap   Sort");
    printf("\n6 -\tQuick  Sort");
    printf("\n0 -\tEncerrar.\n");

    do
    {
        printf("Escolha ==>   ");
        scanf("%d", &op);
    } while (op < 0 || op > 6);
    return op;
}

int main()
{
    srand(time(NULL));
    int op;
    int vetor[TAM];
    long int permutacoes = 0;

    do
    {
        op = gerirMenu();
        switch (op)
        {
        // case 1:
        //     printf("\n\tBubble Short\nO vetor desordenado:\n");
        //     inserirAleatorio(vetor);
        //     apresentarVetor(vetor);
        //     bubbleSort(vetor, TAM);
        //     printf("Foram necessarias %ld operacoes;\n\tO vetor ordenado: \n", permutacoes);
        //     apresentarVetor(vetor);
        //     break;

        // case 2:
        //     printf("\n\tSelect Short\nO vetor desordenado:\n");
        //     inserirAleatorio(vetor);
        //     apresentarVetor(vetor);
        //     permutacoes = selectSort(vetor, TAM);
        //     printf("Foram necessarias %ld operacoes;\n\tO vetor ordenado: \n", permutacoes);
        //     apresentarVetor(vetor);
        //     break;

        // case 3:
        //     printf("\n\tInsert Short\nO vetor desordenado:\n");
        //     inserirAleatorio(vetor);
        //     apresentarVetor(vetor);
        //     permutacoes = insertSort(vetor, TAM);
        //     printf("Foram necessarias %ld operacoes;\n\tO vetor ordenado: \n", permutacoes);
        //     apresentarVetor(vetor);
        //     break;

        // case 4:
        //     printf("\n\tShell  Sort\nO vetor desordenado:\n");
        //     inserirAleatorio(vetor);
        //     apresentarVetor(vetor);
        //     permutacoes = shellSort(vetor, TAM);
        //     printf("Foram necessarias %ld operacoes;\n\tO vetor ordenado: \n", permutacoes);
        //     apresentarVetor(vetor);
        //     break;

        // case 5:
        //     printf("\n\tHeap   Sort\nO vetor desordenado:\n");
        //     inserirAleatorio(vetor);
        //     apresentarVetor(vetor);
        //     permutacoes = heapSort(vetor, TAM);
        //     printf("Foram necessarias %ld operacoes;\n\tO vetor ordenado: \n", permutacoes);
        //     apresentarVetor(vetor);
        //     break;

         case 6:
             permutacoes = 0;
             printf("\n\tQuick  Sort\nO vetor desordenado:\n");
             inserirAleatorio(vetor);
             apresentarVetor(vetor);
             quickSort(vetor, 0, TAM - 1);
             printf("Foram necessarias %ld operacoes;\n\tO vetor ordenado: \n", permutacoes);
             apresentarVetor(vetor);
             break;

        case 0:
            printf("Encerrando...");
            break;
        }
    } while (op != 0);

    return 0;
}