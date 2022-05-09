#include <vector>
#include <limits>
#include <string>
#include <cstdlib>
#include <iostream>
#include <algorithm>

using namespace std;

class Ordenadora {

    private:
        void mergeSort(vector<int> &v, int i, int f);
        void merge(vector<int> &v, int s, int m, int e);

    public:
        Ordenadora(/* args */);
        ~Ordenadora();

        void ordenarPorMerge(vector<int> &v);

};
