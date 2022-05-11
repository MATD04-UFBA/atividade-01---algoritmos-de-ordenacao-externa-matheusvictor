#include <iostream>

#include "headers\Utilitarios.h"

using namespace std;

Utilitarios::Utilitarios() { }
Utilitarios::~Utilitarios() { }

vector<int> Utilitarios::gerarVetorDesordenado(int tamanhoVetor) {
  vector<int> vetorDesordenado;

  srand(time(NULL));

  for (unsigned int i=0; i < tamanhoVetor; i++) {        
      vetorDesordenado.push_back(rand() % tamanhoVetor);
  }
  
  return vetorDesordenado;  
}

void Utilitarios::imprimirVetor(vector<int> v) {
  cout << " ------------------------ ";
  for (int i = 0; i < v.size(); i++){
    cout << v[i] << " ";
  }
  cout << " ------------------------ " << endl;
}
