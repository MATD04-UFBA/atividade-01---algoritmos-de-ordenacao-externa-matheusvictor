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

bool Utilitarios::criarArquivo(string nomeArquivo) {
    
    ofstream arquivo;

    arquivo.open("outputs\\temp_.txt", ios::app);

}

bool Utilitarios::criarArquivoExterno(vector<int> v) {
    
  ofstream arquivo;

  arquivo.open("outputs\\output.txt", ios::app);

  for (int i = 0; i < v.size(); i++){
    arquivo << v[i] << "\n";
  }

  arquivo.close(); // fecha arquivo

  return EXIT_SUCCESS;

}

bool Utilitarios::lerArquivo() {
    
    ifstream arquivo;
    string linha;

    arquivo.open("");

    if (arquivo.is_open()) {
      while (getline(arquivo, linha)) {
        cout << linha << endl;
      }
      arquivo.close();
    }
    else {
      cout << "Nao foi possivel abrir o arquivo" << endl;
      return EXIT_FAILURE;
    }

}