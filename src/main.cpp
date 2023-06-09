/*
Author: Arhur Cadore M. Barcella

GitHub: arthurcadore

This file contains the main code for the program.

This code is responsible for the user interface and the call of the other functions.

*/

#include "main.h"

string fileName = "boletim.csv";
unordered_map<string, string> dataTable;

int main(int argc, char const *argv[]) {

    // Cria a hash table que armazenará os dados.
    // Chama a função que importa os dados do arquivo csv para a hash table.

    importer(dataTable, fileName);

    // imprime o conteúdo da tabela fazendo sua interação
    for (auto& x: dataTable) {
        cout << x.first << ": " << x.second << endl;
    }

}
