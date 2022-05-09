#include <limits>
#include <vector>
#include <cstdlib>
#include <iostream>
#include <algorithm>

#include "headers\Ordenacao.h"
#include "headers\Utilitarios.h"

using namespace std;

int main(int argc, char** argv){

    unsigned int numeroElementos = TAMANHO_MAXIMO;

    
    if (argc > 1) {
        numeroElementos = atoi(argv[1]);
        if (numeroElementos > TAMANHO_MAXIMO) numeroElementos = TAMANHO_MAXIMO;
    }
    

    Utilitarios utils;
    Ordenadora ordenador;
    vector<int> vetorDesordenado = utils.gerarVetorDesordenado(numeroElementos);
    
    utils.imprimirVetor(vetorDesordenado);
    ordenador.ordenarPorMerge(vetorDesordenado);
    utils.imprimirVetor(vetorDesordenado);

}
