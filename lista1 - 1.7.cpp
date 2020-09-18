#include <iostream>
#include <stdio.h>
#include <string.h>


using namespace std;


int main(int argc, char const *argv[])
{    
    // valida a quantidade de parametros
    if (argc != 3)
    {
        cout << "Informe somente o nome de um arquivo de origem e de destino." << endl;
        return 0;
    }
    
    // abre o arquivo
    FILE *arq = fopen(argv[argc-2], "r");
    FILE *arq_final = fopen(argv[argc-1], "w");

    // valida se arquivo existe
    if(!arq){
        cout << "Arquivo não encontrado." << endl;
    } else {
        cout << "Arquivo encontado... \n\n----------- LENDO -----------\n";
    }

    // ler o arquivo enquanto não for o final do arquivo.
    while(!feof(arq)){
        char v;
        // ler do arquivo 1
        fscanf(arq, "%c", &v);
        // salva no arquivo 2
        fprintf(arq_final, "%c", v);
    }

    // fecha o arquivo
    fclose(arq);
    fclose(arq_final);

    // mensagem de fim
    cout << "\n----------- COPIA FINALIZADA -----------" << endl;

    return 0;
}
