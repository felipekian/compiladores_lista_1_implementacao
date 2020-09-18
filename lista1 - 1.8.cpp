/* 
    Com o uso de argc e argv, definidos anteriormente, desenvolva um programa em C++
    para contar o número de caracteres, palavras e linhas no arquivo cujo nome foi
    especificado na linha de comando e apresentar esses totais na tela (saída padrão).

 */

#include <iostream>
#include <stdio.h>
#include <string.h>

#define FALSE 0
#define TRUE 1

using namespace std;

int flag = FALSE;
int inicio = TRUE;

int cont_palavras = 0;
int cont_letras = 0;
int cont_linhas = 0;

void imprimir(int linhas, int letras, int palavras)
{
    cout << "LINHAS  : " << linhas + 1 << endl;
    cout << "LETRAS  : " << letras << endl;
    cout << "PALAVRAS: " << palavras << endl;
    return;
}

void contabilizar(char v)
{
    if (v == '\n' && flag == TRUE) {
        cont_linhas++;
        cont_palavras++;
        flag = FALSE;
    } else if (v != ' ' && v != '\n' && v!='\r' && v!='\t'){
        cont_letras++;
        flag = TRUE;
    } else if ((v == ' ' || v == '\0') && flag == TRUE) {
        cont_palavras++;
        flag = FALSE;
    }
}

int main(int argc, char const *argv[])
{

    // valida a quantidade de parametros
    if (argc > 2)
    {
        cout << "Informe somente o nome de um arquivo." << endl;
        return 0;
    }

    // abre o arquivo
    FILE *arq = fopen(argv[argc - 1], "r");

    // valida se arquivo existe
    if (!arq)
    {
        cout << "Arquivo não encontrado." << endl;
    }
    else
    {
        cout << "Arquivo encontado... \n\n----------- LENDO -----------\n\n";
    }

    // ler o arquivo enquanto não for o final do arquivo.
    while (!feof(arq))
    {
        if(inicio){
            inicio = FALSE;
            flag = TRUE;
        }

        char v;
        fscanf(arq, "%c", &v);
        contabilizar(v);
    }

    // fecha o arquivo
    fclose(arq);

    imprimir(cont_linhas, cont_letras, cont_palavras);

    // mensagem de fim
    cout << "\n\n----------- FIM -----------" << endl;

    return 0;
}
