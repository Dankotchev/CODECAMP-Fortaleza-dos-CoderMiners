#include <stdio.h>
#include <string.h>

// Função que recebe uma string e inverte a ordem das letras.
void inverter(char palavra[])
{
	int tamanhoPalavra, posicao = 0;
	char inversa[100];

	tamanhoPalavra = strlen(palavra) - 1;

	for (int i = tamanhoPalavra; i >= 0; i--)
	{
		inversa[posicao] = palavra[i];
		posicao++;
	}
	inversa[posicao] = '\0';
	strcpy(palavra, inversa);
}

int main()
{
	char palavra[100];
	scanf("%s", palavra);
	inverter(palavra);
	printf("%s", palavra);
	return 0;
}