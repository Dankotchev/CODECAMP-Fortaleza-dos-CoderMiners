#include <stdio.h>

int main() {
  float capacidadeAtual, aumentoPercentual;
  float novaCapacidade;
  
  // Lê as entradas do usuário
  scanf("%f %f", &capacidadeAtual, &aumentoPercentual);

  // TODO: Declare e calcule a nova capacidade do disco de Mithril.
  novaCapacidade = capacidadeAtual *  (1 + (aumentoPercentual / 100));
  
  // TODO: Imprima a nova capacidade.
  printf("%.0f", novaCapacidade);

  return 0;
}