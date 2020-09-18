#include <iostream>
#include <stdio.h>
#include <string.h>


using namespace std;


int main(int argc, char const *argv[])
{    
    // valida a quantidade de parametros
    if (argc > 2)
    {
        cout << "Informe somente o nome de um arquivo." << endl;
        return 0;
    }
    
    // abre o arquivo
    FILE *arq = fopen(argv[argc-1], "r");

    // valida se arquivo existe
    if(!arq){
        cout << "Arquivo não encontrado." << endl;
    } else {
        cout << "Arquivo encontado... \n\n----------- LENDO -----------\n\n";
    }

    // ler o arquivo enquanto não for o final do arquivo.
    while(!feof(arq)){
        char v;
        fscanf(arq, "%c", &v);
        cout << v;
    }

    // fecha o arquivo
    fclose(arq);

    // mensagem de fim
    cout << "\n\n----------- FIM -----------" << endl;

    return 0;
}
