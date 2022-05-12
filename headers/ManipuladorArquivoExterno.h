#include <limits>
#include <vector>
#include <fstream>
#include <cstdlib>
#include <iostream>
#include <algorithm>

using namespace std;
using std::cout; using std::ofstream;
using std::endl; using std::string;
using std::cerr;
using std::fstream;

class ManipuladorArquivoExterno {
    
    private:

    public:
        ManipuladorArquivoExterno(/* args */);
        ~ManipuladorArquivoExterno();

        bool criarArquivoExterno(string nomeArquivo);

};
 