# Árvores binárias - Conceitos

Abaixo há conceitos básicos de árvores binárias.

## Problemas na busca binária

A busca binária é extremamente rápida, por conta de seu método, de ir realizando divisões até encontrar o elemento. Porém há um grande problema que esta apresenta, sua aplicação depende de uma estrutura estática, o que nos dias de hoje, faz sua utilização perder o sentido, por conta de estruturas dinâmicas como listas ligadas.

No caso de lista ligada, como será feita a divisão ? Onde está o elemento do meio ?

Para resolver este problema é que as árvores binárias foram criadas, com ela consigo aplicar a busca binária em estruturas de alocação dinâmica de memória.

## Estrutura

As árvores são formadas por conjuntos de nós. Onde:

* Raiz: É o nó inicial, ou seja, de onde todos os outros nós serão descendentes;
* Grau: Número de subárvores que saem do nó;
* Nós folhas: Nós de grau zero;
  * Folha não tem descendente.
* Nível da árvore:
  * Nível da raiz é 0;
* Altura de um nó(h):
  * É o comprimento do maior caminho entre o nó analisado e uma folha.
* Profundidade:
  * É a distância do nó analisado e a raiz.

### Árvores binárias

A característica desta árvore é que cada nó pode ter no máximo 2 subárvores. Acima disso não é árvore binária.

OBS: Abaixo de cada nó há uma sub-árvore;
OBS: O endereço da árvore é o endereço no nó raiz.

* Importante: Árvores binárias representa (Velocidade) log(n)2 (log de n na base 2) .

Árvores binárias são utilizadas principalmente para criar índices de banco de dados (SQL e NoSQL). Isso porque ele é bem rápido na pesquisa, mesmo com o crescimento  

* OBS: Todos os nós da esquerda tem valor menor, e todos os nós da direita, tem valor maior.

Qual a diferença entre buscar elemento na árvore binária e no vetor ordenado ?
R: A diferença está na velocidade, no caso dos vetores, quanto mais elementos, mais lentos ficam (Inserir e remover) e em uma árvore binária (B-Tree) basta mover ponteiros, o que é muito rápido.
