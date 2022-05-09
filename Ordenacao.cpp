#include <iostream>

#include "headers\Ordenacao.h"

using namespace std;

Ordenadora::Ordenadora(/* args */) { }

Ordenadora::~Ordenadora() { }

void Ordenadora::ordenarPorMerge(vector<int> &v) {	
    Ordenadora::mergeSort(v, 0, v.size()-1);
}

void Ordenadora::mergeSort(vector<int> &v, int i, int f) {

	if (i >= f) return;

	int metade = (i + f) / 2;

	Ordenadora::mergeSort(v, i, metade);
	Ordenadora::mergeSort(v, metade+1, f);

	Ordenadora::merge(v, i, metade, f);	
    

}

void Ordenadora::merge(vector<int> &v, int s, int m, int e) {
        	
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

}
