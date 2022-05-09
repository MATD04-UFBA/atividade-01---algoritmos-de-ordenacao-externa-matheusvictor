#include "utils.h"


vector<int> gerarVetorDesordenado(int tamanhoVetor){
    vector<int> vetorDesordenado;    

    for (unsigned int i=0; i < tamanhoVetor; i++) {        
        vetorDesordenado.push_back(rand() % tamanhoVetor);
    }
    
    return vetorDesordenado;
}

void ordenarPorMerge(vector<int> &v) {
	
    cout << "inicio ordenaroMerge" << endl;
    mergeSort(v, 0, v.size()-1);
    cout << "fim ordenaroMerge" << endl;

}

void mergeSort(vector<int> &v, int i, int f) {

    cout << "inicio mergeSort" << endl;

	if (i == f)
		return;

	int metade = (i + f) / 2;

	mergeSort(v, i, metade);
	mergeSort(v, metade+1, f);

	merge(v, i, metade, f);	
    
    cout << "fim mergeSort" << endl;
}

void merge(vector<int> &v, int metadeEsquerda, int meio, int metadeDireita) {
    
    cout << "inicio merge" << endl;

    vector<int> vetorAuxilar;

    for (int i = metadeEsquerda; i <= metadeDireita; i++) {
        vetorAuxilar[i] = v[i];
        cout << "vetor enchendo";
    }

    for (int i = metadeEsquerda; i <= metadeDireita; i++) {
        cout << vetorAuxilar[i] << endl;
    }

    int inicioPrimeiraMetadeVetor = metadeEsquerda;
    int inicioSegundaMetadeVetor = metadeEsquerda + 1;
    int posicaoMenorElementoEntrePrimeiraESegundaMetade = metadeEsquerda;

    while (metadeEsquerda <= meio && inicioSegundaMetadeVetor >= metadeDireita) { 
        cout << "...";
        if (vetorAuxilar[inicioPrimeiraMetadeVetor] <= v[inicioSegundaMetadeVetor]) {
           v[posicaoMenorElementoEntrePrimeiraESegundaMetade] = vetorAuxilar[inicioPrimeiraMetadeVetor];
           inicioPrimeiraMetadeVetor++;
        } else {
            v[posicaoMenorElementoEntrePrimeiraESegundaMetade] = v[inicioSegundaMetadeVetor];
            inicioSegundaMetadeVetor++;
        }
        posicaoMenorElementoEntrePrimeiraESegundaMetade++;
    }  

    // se a metade inicial não foi toda consumida, faz o append.
    while (inicioPrimeiraMetadeVetor <= meio) {
        v[posicaoMenorElementoEntrePrimeiraESegundaMetade] = vetorAuxilar[inicioPrimeiraMetadeVetor];
        inicioPrimeiraMetadeVetor++;
        posicaoMenorElementoEntrePrimeiraESegundaMetade++;
    }
    
    // se a metade final não foi toda consumida, faz o append.
    while (inicioSegundaMetadeVetor <= metadeDireita) {
        v[posicaoMenorElementoEntrePrimeiraESegundaMetade] = vetorAuxilar[inicioSegundaMetadeVetor];
        inicioSegundaMetadeVetor++;
        posicaoMenorElementoEntrePrimeiraESegundaMetade++;
    }

    for (int i = 0; i < v.size(); i++){
        cout << v[i] << " ** ";
    }

    cout << "fim merge" << endl;

}
