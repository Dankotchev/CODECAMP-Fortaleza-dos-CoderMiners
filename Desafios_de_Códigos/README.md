![C](https://img.shields.io/badge/c-%2300599C.svg?style=for-the-badge&logo=c&logoColor=white "C")
![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)

# Afiando Sua Lógica de Programação em C

## [Monitorando a Conta de Energia](básico/ContaEnergia.c)

As máquinas pesadas da Fortaleza dos CodeMiners precisam de ajustes em seus parâmetros. Proativamente, você sugere uma solução que calcule a média do consumo energético de três máquinas, já que essa é a configuração mais utilizada por eles. Desta forma, será possível analisar e planejar a estratégia de escavação mais eficiente, pois diferentes combinações de máquinas poderão ser avaliadas por meio do mesmo algoritmo.

### Entrada

Três valores inteiros positivos, representando o consumo de energia de cada máquina, separados por espaços.

### Saída

A média de consumo das três máquinas, formatada com duas casas decimais.

### Exemplos

A tabela abaixo apresenta exemplos com alguns dados de entrada e suas respectivas saídas esperadas. Certifique-se de testar seu programa com esses exemplos e com outros casos possíveis.

| **Entrada** | **Saída** |
| --- | --- |
| 10 20 30 | 20.00 |
| 15 25 35 | 25.00 |
| 5 10 20 | 11.67 |


## [Armazenamento de Dados é Vida](básico/Armazenamento.c)

Com as máquinas pesadas agrupadas estrategicamente, graças ao seu algoritmo de cálculo energético, agora a mineração está muito mais eficiente! Com isso, os CodeMiners logo terão que aumentar a capacidade de armazenamento de dados em seus discos de Mithril. Atualmente, cada máquina tem uma capacidade em teraflops e todas terão um upgrade! Escreva um programa em C que calcule a nova capacidade total de todas as máquinas após um aumento percentual específico.

### Entrada

Dois valores inteiros positivos, representando a capacidade atual total em teraflops e o aumento percentual, separados por espaço.

### Saída

A nova capacidade total em teraflops.

### Exemplos

A tabela abaixo apresenta exemplos com alguns dados de entrada e suas respectivas saídas esperadas. Certifique-se de testar seu programa com esses exemplos e com outros casos possíveis.

| **Entrada** | **Saída** |
| --- | --- |
| 100 20 | 120 |
| 50 10 | 55  |
| 200 50 | 300 |


## [Palavras Têm Poder](básico/PalavrasTemPoder.c)

Com o avanço inédito às profundezas da Grande Montanha, os CodeMiners encontraram um pergaminho antigo com códigos secretos em um local que exala uma energia divina. Eles precisam decifrar o código, que consiste em um conjunto simples de palavras. Escreva um programa em C que inverta a ordem das letras para revelar as palavras secretas.

## Entrada

Um texto com uma palavra misteriosa (com no máximo 100 caracteres) sem espaços.

## Saída

O texto invertido.

## Exemplos

A tabela abaixo apresenta exemplos com alguns dados de entrada e suas respectivas saídas esperadas. Certifique-se de testar seu programa com esses exemplos e com outros casos possíveis.

| **Entrada** | **Saída** |
| --- | --- |
| tumahaB | Bahamut |
| droK | Kord |
| sihtarE | Erathis |

## [Cogumelos Por Todos os Lados](básico/Cogumelo.c)
Com as máquinas trabalhando e as picaretas cansadas, os CodeMiners precisam colher cogumelos para aumentar o seu estoque. Após desvendar os nomes das divindades no desafio anterior, os CodeMiners foram abençoados e a colheita de cogumelos tornou-se mais abundante. Com isso, eles agora conseguem colher 1 cogumelo a cada 3 minutos. Crie um programa em C que preveja quantos cogumelos serão colhidos em um determinado período de tempo.

### Entrada

Um número inteiro representando a quantidade de minutos disponíveis para a colheita.

### Saída

Um número inteiro representando a quantidade de cogumelos colhidos.

### Exemplos

A tabela abaixo apresenta exemplos com alguns dados de entrada e suas respectivas saídas esperadas. Certifique-se de testar seu programa com esses exemplos e com outros casos possíveis.

| **Entrada** | **Saída** |
| --- | --- |
| 9   | 3   |
| 33  | 11  |
| 12  | 4   |


## [Fermentar é Viver](básico/Fermentar.c)
Com o estoque de cogumelos nas alturas, os CodeMiners estão produzindo sua famosa cerveja artesanal e agora precisam monitorar sua temperatura constantemente. A temperatura é um fator crítico para garantir a qualidade da cerveja, e um desvio dos valores ideais pode afetar negativamente seu sabor e aroma. Para solucionar esse problema, será criado um programa em C que será embarcado na cervejeira e fornecerá leituras em tempo real da temperatura, permitindo que os CodeMiners monitorem a cerveja durante todo o processo de produção.

### Entrada

Um número inteiro representando a temperatura atual.

### Saída

Uma string: "Ideal" se a temperatura estiver no intervalo ideal, "Baixa" se estiver abaixo de 18 graus e "Alta" se estiver acima de 24 graus.

### Exemplos

A tabela abaixo apresenta exemplos com alguns dados de entrada e suas respectivas saídas esperadas. Certifique-se de testar seu programa com esses exemplos e com outros casos possíveis.

| **Entrada** | **Saída** |
| --- | --- |
| 20  | Ideal |
| 15  | Baixa |
| 26  | Alta |


# Ordem na Fábrica


## [Ordenação de Poções com Bubble Short](intermediário/BubbleShort.c)

Na Fortaleza dos CodeMiners, há uma área especializada em alquimia, onde os aprendizes criam poções mágicas (extraídas dos óleos essenciais dos cogumelos da Grande Montanha) para aprimorar suas habilidades. As poções são armazenadas em frascos numerados e os aprendizes precisam organizá-las em ordem crescente de acordo com a numeração. Sua missão é criar um algoritmo em C que implemente o Bubble Sort¹ para ordenar os frascos de poção. Este algoritmo ajudará os aprendizes a manterem a área de alquimia organizada e eficiente.

¹ É um dos algoritmos de ordenação mais simples e é fácil de entender. Ele compara pares de elementos adjacentes e troca-os se estiverem fora de ordem, repetindo esse processo até que toda a lista esteja ordenada. Apesar de não ser eficiente, é um bom ponto de partida para o estudo de algoritmos de ordenação. Saiba mais [aqui](https://pt.wikipedia.org/wiki/Bubble_sort).

## Entrada

* 1ª Linha: Número inteiro N (1 <= N <= 1000), representando a quantidade de frascos de poção.
* 2ª Linha: Lista com N números inteiros NÃO ORDENADOS e separados por espaços, representando a numeração de cada frasco de poção.

## Saída

Imprima a lista de frascos de poção em ORDEM CRESCENTE, com cada número separado por um espaço.

## Exemplos

A tabela abaixo apresenta exemplos com alguns dados de entrada e suas respectivas saídas esperadas. Certifique-se de testar seu programa com esses exemplos e com outros casos possíveis.

| Entrada | Saída |
| --- | --- |
| 5  <br>5 3 4 1 2 | 1 2 3 4 5 |
| 7  <br>10 20 30 40 50 60 7 | 7 10 20 30 40 50 60 |
| 9  <br>1000 1 10 100 0 4 4000 400 40 | 0 1 4 10 40 100 400 1000 4000 |


## [Ordenação de Relíquias com Insert Short](intermediário/InsertShort.c)

Na Fortaleza dos CodeMiners, o processo de mineração de dados, eventualmente, coleta relíquias místicas que possuem poderes incríveis. Essas relíquias são numeradas de acordo com sua raridade e os estudiosos desejam organizá-las em ordem crescente para facilitar a pesquisa e o estudo. Sua missão é criar um algoritmo em C que implemente o Insertion Sort¹ para ordenar as relíquias. Com esse algoritmo, os estudiosos poderão manter suas relíquias organizadas e acessíveis, permitindo um estudo mais eficiente das propriedades místicas.

¹ Um passo à frente do Bubble Sort, o Insertion Sort é outro algoritmo simples de entender e implementar. Ele funciona construindo uma sublista ordenada, inserindo elementos um a um em suas posições corretas. Apesar de ainda não ser o mais eficiente, é uma evolução natural no aprendizado após o Bubble Sort. Saiba mais [aqui](https://pt.wikipedia.org/wiki/Insertion_sort).

### Entrada

* 1ª Linha: Número inteiro N (1 <= N <= 1000), representando a quantidade de relíquias.
* 2ª Linha: Lista com N números inteiros NÃO ORDENADOS e separados por espaços, representando a raridade de cada relíquia.

### Saída

Imprima a lista de relíquias em ORDEM CRESCENTE, com cada número separado por um espaço.

### Exemplos

A tabela abaixo apresenta exemplos com alguns dados de entrada e suas respectivas saídas esperadas. Certifique-se de testar seu programa com esses exemplos e com outros casos possíveis.

| Entrada | Saída |
| --- | --- |
| 5  <br>5 3 4 1 2 | 1 2 3 4 5 |
| 7  <br>10 20 30 40 50 60 7 | 7 10 20 30 40 50 60 |
| 9  <br>1000 1 10 100 0 4 4000 400 40 | 0 1 4 10 40 100 400 1000 4000 |
| 6  <br>22 3 4 9 77 20 | 3 4 9 20 22 77 |

## [Ordenação de Armaduras com Selection Short](intermediário/SelectionShort.c)

Os guerreiros da Fortaleza dos CodeMiners precisam manter suas armaduras em ordem, para facilitar a escolha do equipamento certo antes das batalhas. As armaduras são numeradas de acordo com seu nível de proteção, e os guerreiros desejam organizá-las em ordem decrescente. Sua missão é criar um algoritmo em C que implemente o **Selection Sort**¹ para ordenar as armaduras. Com esse algoritmo, os guerreiros poderão encontrar a armadura mais adequada rapidamente, o que pode ser crucial em uma situação de combate.

¹Este algoritmo é um pouco mais avançado que os anteriores. Ele divide a lista em duas partes: a parte ordenada e a parte não ordenada. A cada iteração, o algoritmo seleciona o menor (ou maior) elemento da parte não ordenada e o move para o final da parte ordenada. Isso ajuda a entender melhor a divisão do trabalho em algoritmos de ordenação. Saiba mais [aqui](https://pt.wikipedia.org/wiki/Selection_sort).

### Entrada

* 1ª Linha: Número inteiro N (1 <= N <= 1000), representando a quantidade de armaduras.
* 2ª Linha: Lista com N números inteiros NÃO ORDENADOS e separados por espaços, representando o nível de proteção de cada armadura.

### Saída

Imprima a lista de armaduras em ORDEM DECRESCENTE, com cada número separado por um espaço.

### Exemplos

A tabela abaixo apresenta exemplos com alguns dados de entrada e suas respectivas saídas esperadas. Certifique-se de testar seu programa com esses exemplos e com outros casos possíveis.

| Entrada | Saída |
| --- | --- |
| 5  <br>5 3 4 1 2 | 5 4 3 2 1 |
| 7  <br>10 20 30 40 50 60 7 | 60 50 40 30 20 10 7 |
| 9  <br>1000 1 10 100 0 4 4000 400 40 | 4000 1000 400 100 40 10 4 1 0 |
| 10  <br>1 2 3 4 5 6 7 8 9 10 | 10 9 8 7 6 5 4 3 2 1 |

## [Ordenação de Joias com Quick Short](intermediário/QuickShort.c)

Na Fortaleza dos CodeMiners, há uma câmara secreta onde são guardadas joias preciosas utilizadas em rituais e cerimônias. As joias são numeradas com base em seu valor, e os guardiões desejam organizá-las em ordem crescente para facilitar a localização das joias necessárias para cada ocasião. Sua missão é criar um algoritmo em C que implemente o Quick Sort¹ para ordenar as joias. Com esse algoritmo, os guardiões poderão manter as joias organizadas de maneira eficiente e garantir que os rituais e cerimônias ocorram sem problemas.

¹ É um algoritmo de ordenação eficiente que utiliza a técnica de divisão e conquista. O Quick Sort seleciona um elemento chamado pivô e particiona a lista de forma que todos os elementos menores que o pivô fiquem à esquerda e os maiores à direita. O processo é repetido recursivamente nas sublistas geradas. A introdução do Quick Sort nesta etapa ajuda a entender o conceito de recursão e a importância da escolha do pivô. Saiba mais [aqui](https://pt.wikipedia.org/wiki/Quicksort).

### Entrada

* 1ª Linha: Número inteiro N (1 <= N <= 100), representando a quantidade de joias.
* 2ª Linha: Lista com N números inteiros NÃO ORDENADOS e separados por espaços, representando o valor de cada joia.

### Saída

Imprima a lista de joias em ORDEM CRESCENTE, com cada número separado por um espaço.

### Exemplos

A tabela abaixo apresenta exemplos com alguns dados de entrada e suas respectivas saídas esperadas. Certifique-se de testar seu programa com esses exemplos e com outros casos possíveis.

| Entrada | Saída |
| --- | --- |
| 5  <br>5 3 4 1 2 | 1 2 3 4 5 |
| 7  <br>10 20 30 40 50 60 7 | 7 10 20 30 40 50 60 |
| 9  <br>1000 1 10 100 0 4 4000 400 40 | 0 1 4 10 40 100 400 1000 4000 |
| 6  <br>33 44 55 88 11 22 | 11 22 33 44 55 88 |

## [Garantindo Sua Vaga na CodeMiners/IO com Busca Binária](intermediário/BuscaBinaria.c)

Em meio aos corredores da Fortaleza dos CodeMiners, você encontra uma magnífica biblioteca repleta de livros, pergaminhos e discos de Mithril, todos meticulosamente organizados. Esta biblioteca é gerida por Hella, uma CodeMiner conhecida por sua sagacidade, paixão e habilidades literárias. Você a encontra trabalhando em seu novo livro, "O Senhor dos Dados: O Retorno do Array", que precisa ser finalizado até o fim do dia para ser lançado na "CodeMiners I/O". Neste evento, jovens talentos serão treinados em mineração de dados no majestoso salão nobre da Fortaleza.

Percebendo a preocupação da escritora com o tempo, você se oferece para ajudá-la. Hella, então, propõe um acordo: se você desenvolver uma solução capaz de identificar a presença de conteúdos do tipo 777 (projetos práticos sobre a temática do seu novo livro) nas estantes da biblioteca, ela lhe concederá uma cadeira de honra na "CodeMiners I/O". Sua missão é criar um algoritmo em C que implemente, preferencialmente, uma Busca Binária¹ para verificar se uma determinada estante possui um conteúdo do tipo 777. Com isso, você ajudará Hella a encontrar de forma eficiente as localizações dos materiais complementares para o lançamento do livro, além de garantir sua cadeira de honra no evento.

¹ Busca Binária é um algoritmo eficiente para encontrar um elemento em uma lista ordenada. Ele divide a lista ao meio e compara o elemento do meio com o valor desejado. Dependendo da comparação, ele descarta metade da lista e repete o processo até encontrar o elemento desejado ou reduzir a lista a zero. Isso ensina a importância da otimização de algoritmos de busca e como a ordenação pode ser útil nesse contexto. Saiba mais [aqui](https://pt.wikipedia.org/wiki/Busca_bin%C3%A1ria).

### Entrada

1ª Linha: Número inteiro N (1 <= N <= 1000), representando a quantidade de conteúdos na estante da biblioteca.

2ª Linha: Lista com N números inteiros NÃO ORDENADOS e separados por espaços, representando os tipos de cada conteúdo de uma estante da biblioteca. Entretanto, prevendo a necessidade de ordenação dos conteúdos para uma Busca Binária efetiva, Hella já aplicou um de seus algoritmos de ordenação no código base deste desafio.

### Saída

Se o conteúdo do tipo 777 for encontrado na lista, imprima "S" (sem as aspas). Caso contrário, imprima "N" (sem as aspas).

### Exemplos

A tabela abaixo apresenta exemplos com alguns dados de entrada e suas respectivas saídas esperadas. Certifique-se de testar seu programa com esses exemplos e com outros casos possíveis.

| Entrada | Saída |
| --- | --- |
| 10  <br>70 63 56 49 42 35 28 21 14 7 | N   |
| 7  <br>776 772 773 775 774 771 777 | S   |
| 7  <br>177 377 677 777 277 477 577 | S   |
| 6  <br>7 57 89 90 98 102 | N   |


# Desafio Final! Programação Orientada a Objetos Mágicos em C++
## [Batalha Final! Enfrentando o Boss Overfitting](avançado/BatalhaFinal.cpp)

Após uma noite de gala no lançamento do livro de Hella na CodeMiners I/O, os trabalhos de mineração de dados voltaram a todo vapor. Com novas técnicas e boas práticas exploradas na conferência, a eficiência na mineração aumentou consideravelmente. Foi então que, finalmente, os CodeMiners localizaram a lendária masmorra do temido Boss Overfitting.

Overfitting é um Boss astuto, conhecido por sua capacidade de se adaptar excessivamente às estratégias de seus adversários, tornando-se imprevisível e difícil de ser derrotado. Os CodeMiners, durante séculos de mineração de dados, documentaram suas descobertas e identificaram as fraquezas do Boss Overfitting. Essas informações são valiosas, pois indicam quais equipamentos devem ser usados pelos CodeMiners para derrotá-lo.

O desafio consiste em criar um programa em C++ que utilize Orientação a Objetos e algoritmos de busca (busca linear, binária ou outros mais eficientes) para determinar se os CodeMiners têm em seu arsenal os equipamentos necessários para derrotar o Boss Overfitting. Para isso, teremos em nosso template de código as classes `FortalezaCodeMiner` e `Boss` com atributos relacionados às nossas entradas, além do método `possui_equipamento` preparado para implementação de seu algoritmo de busca escolhido.

### Entrada

* O programa receberá duas linhas:
    
* A primeira contendo os pontos fracos do Boss (inteiros separados por espaços);
* A segunda com os equipamentos disponíveis no Arsenal dos CodeMiners (inteiros separados por espaços).

### Saída

O objetivo é verificar se a lista de equipamentos possui TODOS os itens necessários para eliminar os pontos fracos do Boss. Se sim, o programa deve imprimir "Vencemos!". Caso contrário, deve imprimir "Perdemos!".

### Exemplos

A tabela abaixo apresenta exemplos com alguns dados de entrada e suas respectivas saídas esperadas. Certifique-se de testar seu programa com esses exemplos e com outros casos possíveis.

| **Entrada** | **Saída** |
| --- | --- |
| 1 2 3 5  <br>1 2 3 4 5 6 7 8 9 10 | Vencemos! |
| 1 2 3 5  <br>1 3 4 6 8 7 9 10 2 5 | Vencemos! |
| 1 3 5 7  <br>1 2 4 6 8 9 10 | Perdemos! |
| 1 3 5 7  <br>6 4 8 1 9 10 2 7 | Perdemos! |
