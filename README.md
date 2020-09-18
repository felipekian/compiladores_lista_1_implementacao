# compiladores lista 1 implementacao em c++

* 1.6) Um programa em C ou C ++ permite a passagem de argumentos da linha de
comando por meio de dois parâmetros da função main:
int main(int argc, char *argv[]) {...}
O primeiro parâmetro, que tipicamente recebe o nome argc (argument
count), indica o número de palavras (separadas por espaços) presentes na
linha de comando, incluindo o próprio nome do programa. O segundo pa-
râmetro, cujo nome típico é argv (argument value), é um arranjo de pon-
teiros para caracteres, onde cada elemento do arranjo representa uma das
palavras da linha de comando. Com o uso desses argumentos, desenvolva
um programa em C ++ para apresentar na saída padrão o conteúdo de um
arquivo cujo nome é fornecido na linha de comando.



* 1.7) Com o uso de argc e argv, definidos anteriormente, desenvolva um pro-
grama em C ++ para implementar a cópia do conteúdo de um arquivo, cujo
nome é passado como o primeiro argumento para o programa na linha de
comando, para outro arquivo, cujo nome é passado como o segundo argu-
mento na linha de comando.



 * 1.8) Com o uso de argc e argv, definidos anteriormente, desenvolva um pro-
grama em C ++ para contar o número de caracteres, palavras e linhas no
arquivo cujo nome foi especificado na linha de comando e apresentar esses
totais na tela (saída padrão).



* 1.10) A função atoi, da biblioteca padrão da linguagem C, permite a conversão
de uma seqüência de caracteres (passada como argumento da função) para
um valor inteiro (seu valor de retorno). Use essa função para implementar uma função
C ++ que receba qualquer quantidade de inteiros na linha de
comando e apresente na saída padrão a soma desses valores. Por exemplo,
se o programa executável tem o nome de total, a execução
total 1 20 100 deve apresentar na tela o valor 121.
