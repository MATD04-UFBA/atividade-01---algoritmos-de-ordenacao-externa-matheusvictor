#include <vector>
#include <limits>
#include <string>
#include <fstream>
#include <cstdlib>
#include <iostream>
#include <algorithm>

#define TAMANHO_MAXIMO 100

using namespace std;

class Utilitarios {
    
    private:
        /* data */

    public:
        Utilitarios();
        ~Utilitarios();
        
        vector<int> gerarVetorDesordenado(int tamanhoVetor);
    
        void imprimirVetor(vector<int> v);

        bool criarArquivo(string nomeArquivo);

        bool criarArquivoExterno(vector<int> v);

        bool lerArquivo();

};
