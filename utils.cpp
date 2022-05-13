#include ".\headers\utils.h"


vector<int> gerarVetorDesordenado(int tamanhoVetor){
    vector<int> vetorDesordenado;    

    for (unsigned int i=0; i < tamanhoVetor; i++) {        
        vetorDesordenado.push_back(rand() % 100); // gera valores aleatórios na casa de 100
    }
    
    return vetorDesordenado;
}

void imprimirVetor(vector<int> v) {
    for (int i = 0; i < v.size(); i++){
        cout << v[i] << " ";
    }
}

void ordenarPorMerge(vector<int> &v) {	
    cout << "inicio ordenaroMerge" << endl;
    mergeSort(v, 0, v.size()-1);
    cout << "fim ordenaroMerge" << endl;
}

void mergeSort(vector<int> &v, int i, int f) {

    cout << "inicio mergeSort" << endl;

	if (i >= f) return;

	int metade = (i + f) / 2;

	mergeSort(v, i, metade);
	mergeSort(v, metade+1, f);

	merge(v, i, metade, f);	
    
    cout << "fim mergeSort" << endl;
}

void merge(vector<int> &v, int s, int m, int e) {
    
    cout << "inicio merge" << endl;
    	
	vector<int> vetorAuxiliar;

	int i, j;
	i = s;
	j = m + 1;

	while (i <= m && j <= e) {

		if (v[i] <= v[j]) {
			vetorAuxiliar.push_back(v[i]);
			++i;
		} else {
			vetorAuxiliar.push_back(v[j]);
			++j;
		}

	}

    // se a metade inicial não foi toda consumida, faz o append.
	while (i <= m) {
		vetorAuxiliar.push_back(v[i]);
		++i;
	}

	while (j <= e) {
		vetorAuxiliar.push_back(v[j]);
		++j;
	}

	for (int i = s; i <= e; ++i)
		v[i] = vetorAuxiliar[i - s];


    cout << "fim merge" << endl;

}
