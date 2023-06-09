/*
Author: Arhur Cadore M. Barcella

GitHub: arthurcadore

This file contains the implementation of the archiveReader class.

This code collect the data from csv archive and store it in a hash table.

*/

#include "archiveReader.h"

// This function read the csv archive and store it in a hash table.

void importer(unordered_map<string, string> &dataTable, string fileName){

  // Abre arquivo CSV
  ifstream csv(fileName);

  if (!csv.is_open()) {
    // Caso haja erro ao abrir o arquivo, retorna exeção.
    throw "Erro ao abrir o arquivo csv";
  }

  // Retira a primeira linha do arquivo, que contém apenas os nomes das colunas.
  string line;
  getline(csv, line);

  // imprime a linha para o usuário;
  cout << line << endl;


}


