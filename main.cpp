#include <limits>
#include <vector>
#include <cstdlib>
#include <iostream>
#include <algorithm>

#include "headers\Ordenacao.h"
#include "headers\Utilitarios.h"

#define CAPACIDADE_MEMORIA 10

using namespace std;

int main(int argc, char** argv){

    unsigned int numeroElementos;

    if (argc > 1) {
        numeroElementos = atoi(argv[1]);
    } else {
        cout << "Quantos itens serao processados?" << endl;
        cout << ">> ";
        cin >> numeroElementos;
    }

    Utilitarios utils;
    vector<int> vetorDesordenado = utils.gerarVetorDesordenado(numeroElementos);
    vector<int> vetorFinal (numeroElementos);

    Ordenadora ordenador;
    
    //utils.imprimirVetor(vetorDesordenado);

    if (numeroElementos > CAPACIDADE_MEMORIA) {
        int qtdBlocos = numeroElementos / CAPACIDADE_MEMORIA;        
        cout << "Serao necessarios " << qtdBlocos << " blocos de processamento...";
        
        vector<int> vetorTemporario (qtdBlocos);

        for (int i = 0; i < vetorTemporario.size(); i++) {
            vetorTemporario.push_back(vetorDesordenado[i]);
            if(i == 99) {
                break;
            }
        }

        for (int i = 0; i < vetorTemporario.size(); i++) {
            if (vetorTemporario[i] != 0) 
                cout << vetorTemporario[i] << " - ";
        }

        cout << " ====================" << endl;

        ordenador.ordenarPorMerge(vetorTemporario);

        for (int i = 0; i < vetorTemporario.size(); i++) {
            if (vetorTemporario[i] != 0) 
                cout << vetorTemporario[i] << " - ";
        }

    }

    cout << "meu vetor gerado tem " << vetorDesordenado.size() << " elementos";
    cout << "meu vetor final tem " << vetorFinal.size() << " elementos";

    
    
    
    
    //ordenador.ordenarPorMerge(vetorDesordenado);
    //utils.imprimirVetor(vetorDesordenado);

}
