#include <limits>
#include <vector>
#include <fstream>
#include <cstdlib>
#include <iostream>
#include <algorithm>

#include "headers\Ordenacao.h"
#include "headers\Utilitarios.h"
#include "headers\ManipuladorArquivoExterno.h"

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
    Ordenadora ordenador;
    vector<int> vetorDesordenado = utils.gerarVetorDesordenado(numeroElementos);
    vector<int> vetorFinal (numeroElementos);
    
    if (numeroElementos > CAPACIDADE_MEMORIA) {

        int qtdBlocos = numeroElementos / CAPACIDADE_MEMORIA;        
        cout << "Serao necessarios " << qtdBlocos << " blocos de processamento para ordenacao completa..." << endl;

        int contadorBlocos = 0;
        ofstream arquivoTemporario;
        
        while (contadorBlocos < qtdBlocos) {
            
            arquivoTemporario.open("outputs\\bloco_temp_" + std::to_string(contadorBlocos) + ".txt", ios::app);

            for (int i = 0; i < CAPACIDADE_MEMORIA; i ++) {
                arquivoTemporario << vetorDesordenado[i] << "\n";
            }

            arquivoTemporario.close();            
            cout << "Contador de blocos = " << (contadorBlocos + 1) << endl;
            contadorBlocos++;
        }

    } else {
        ordenador.ordenarPorMerge(vetorDesordenado);
        utils.imprimirVetor(vetorDesordenado);
    }

}
