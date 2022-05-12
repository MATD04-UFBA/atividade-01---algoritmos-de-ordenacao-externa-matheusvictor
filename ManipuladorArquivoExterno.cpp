#include "headers\ManipuladorArquivoExterno.h"

ManipuladorArquivoExterno::ManipuladorArquivoExterno(/* args */) { }

ManipuladorArquivoExterno::~ManipuladorArquivoExterno() { }

bool ManipuladorArquivoExterno::criarArquivoExterno(string nomeArquivo) {
    
    ofstream arquivo;

    arquivo.open("outputs\\" + nomeArquivo, ios::app);
    arquivo << "Texto de exemplo\n";

    arquivo.close(); // fecha arquivo

    return EXIT_SUCCESS;
}
