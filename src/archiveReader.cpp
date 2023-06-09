/*
Author: Arhur Cadore M. Barcella

GitHub: arthurcadore

This file contains the implementation of the archiveReader class.

This code collect the data from csv archive and store it in a hash table.

*/

#include "archiveReader.h"

list<string> cities;
list<string> atualLine;

using namespace std;

void importer(string fileName){

  // Abre arquivo CSV
  ifstream archiveCSV(fileName);

  if (!archiveCSV.is_open()) {
    // Caso haja erro ao abrir o arquivo, retorna exeção.
    throw "Erro ao abrir o arquivo csv";
  }

  // // Retira a primeira linha do arquivo, que contém apenas os nomes das colunas.
  // string line;
  // getline(csv, line);

  // // imprime a linha para o usuário;
  // cout << line << endl;

  string line;
 while (getline(archiveCSV, line)) {

    // Verifica se a linha não está vazia.
    if (!line.empty()) {

      // Cria um stringstream para ler a linha.
      stringstream ss(line);

      while (ss.good()) {
        string substr;
        getline(ss, substr, ',');
        atualLine.push_back(substr);
      }

      // pega a primeira posição da lista atualine e imprime no terminal, verifica se a string é vazia.
      if (!atualLine.front().empty()) {
        // cout << atualLine.front() << endl;
      string city = atualLine.front();
      cities.push_back(city);
      }
      atualLine.clear();
    }
  }

  cout << cities.size() << endl;
  // Remove duplicatas na lista de cidades.
    cities.sort();
    cities.unique();
  cout << cities.size() << endl;

  // intera a lista de cidade imprimindo no terminal:
  // for (auto& x: cities) {
  //   cout << x << endl;
  // }
}


