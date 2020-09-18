#include <iostream>
#include <stdio.h>
#include <string.h>


using namespace std;


int main(int argc, char const *argv[])
{    
   
    if( strcmp(argv[1], "total") != 0 ){
        cout << "parametros não reconhecidos" << endl;
        return EXIT_SUCCESS;
    }

    int total = argc;
    int contabilizar = 0;

    for (int i = 2; i < total; i++)
    {
        contabilizar += atoi(argv[i]);
    }
    
    cout << "\n" << contabilizar << endl;

    return EXIT_SUCCESS;
}
