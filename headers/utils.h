#include <vector>
#include <limits>
#include <cstdlib>
#include <iostream>
#include <algorithm>

using namespace std;

vector<int> gerarVetorDesordenado(int tamanhoVetor);

void ordenarPorMerge(vector<int> &v);

void mergeSort(vector<int> &v, int i, int f);

void merge(vector<int> &v, int metadeEsquerda, int meio, int metadeDireita);

void imprimirVetor(vector<int> v);
