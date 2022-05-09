#include <limits>
#include <vector>
#include <cstdlib>
#include <iostream>
#include <algorithm>

#include "utils.h"

using namespace std;

#define TAMANHO_MAXIMO 10

int main(){

    vector<int> vetorDesordenado = gerarVetorDesordenado(TAMANHO_MAXIMO);

   ordenarPorMerge(vetorDesordenado);

}
