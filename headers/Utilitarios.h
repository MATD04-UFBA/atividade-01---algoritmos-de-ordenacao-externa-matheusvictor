#include <vector>
#include <limits>
#include <string>
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

};
