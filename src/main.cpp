/*
Author: Arhur Cadore M. Barcella

GitHub: arthurcadore

This file contains the main code for the program.

This code is responsible for the user interface and the call of the other functions.

*/

#include "main.h"


int main(int argc, char const *argv[]) {

    // string dataSetArchive = argv[1];
    // string atualState = argv[2];
    // bool printCSV = true;

    string dataSetArchive = INPUT1;
    string atualState = INPUT2;
    bool printCSV = true;

    
    // Faz a leitura do dataset linha a linha, utilizando como filtro o estado passado como argumento de linha de comando. 
    statesReader(dataSetArchive, atualState, printCSV);
}

// slide de correlação pra casos confirmados e mortes 
// corelação de população e mortes 
// área em (m2) de cada estado. 
// densidade populacional com desvio padrão de cada estado. 
