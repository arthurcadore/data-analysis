/*
Author: Arhur Cadore M. Barcella

GitHub: arthurcadore

This file contains the main code for the program.

This code is responsible for the user interface and the call of the other functions.

*/

#include "main.h"

string dataSetArchive = "caso_full.csv";
string citiesArchive = "cities.txt";

int main(int argc, char const *argv[]) {

    // Faz a leitura inicial do dataset para procurar quais são os estados.
    statesReader(dataSetArchive, COLUNAESTADOS);

    // Faz a leitura do dataset linha a linha, utilizando como filtro o estado passado como argumento de linha de comando. 
    // importerData(dataSetArchive, argv[1]);
}
