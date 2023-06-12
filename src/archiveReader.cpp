/*
Author: Arhur Cadore M. Barcella

GitHub: arthurcadore

This file contains the implementation of the archiveReader class.

This code collect the data from csv archive and store it in a hash table.

*/

#include "archiveReader.h"

list<string> cities;

unordered_map<string, list<string>> dataDeathTable;
unordered_map<string, list<string>> dataConfirmedTable;
unordered_map<string, list<string>> dataPopulationConfirmed;

char separatorCharacter = ',';

void separator(const string& input, char separator, list<string>& line) {
    int space = 0;
    string stringSeparator, aux;

    stringSeparator += separator;

    while (space != string::npos) {
        int word = input.find_first_not_of(stringSeparator, space);

        if (word == string::npos) break;

        space = input.find(separator, word);
        if (space == string::npos) {
            aux = input.substr(word);
        } else {
            aux = input.substr(word, space - word);
        }
        line.push_back(aux);
    }
}

void importerCities(string FileName){

  // importa a lista de cidades de um arquivo .txt com as cidades separadas por quebra de linha.

  // Abre arquivo txt
  ifstream archiveTXT(FileName);

  if (!archiveTXT.is_open()) {
    // Caso haja erro ao abrir o arquivo, retorna exeção.
    throw "Erro ao abrir o arquivo txt";
  }

  string line;
  while (getline(archiveTXT, line)) {

    // Verifica se a linha não está vazia.
    if (!line.empty()) {

      // recebe a primeira coluna da linha, que contém o nome da cidade.
      cities.push_back(lineOutput.front());
    }
  }
}

void importerData(string fileName){

  // Abre arquivo CSV
  ifstream archiveCSV(fileName);

  if (!archiveCSV.is_open()) {
    // Caso haja erro ao abrir o arquivo, retorna exeção.
    throw "Erro ao abrir o arquivo csv";
  }

  // Retira a primeira linha do arquivo, que contém apenas os nomes das colunas.
  string line;
  std::getline(archiveCSV, line);

 while (getline(archiveCSV, line)) {

    // Verifica se a linha não está vazia.
    list<string> lineOutput;
    if (!line.empty()) {

     // Separa a linha em palavras, utilizando o separador ','.
      separator(line, separatorCharacter, lineOutput);

      // verifica se a primeira coluna da linha não está vazia. 
      if(lineOutput.back() != ""){
      }

    }
  }

}


void statesReader(string fileName){

  // Abre arquivo CSV
  ifstream archiveCSV(fileName);

  if (!archiveCSV.is_open()) {
    // Caso haja erro ao abrir o arquivo, retorna exeção.
    throw "Erro ao abrir o arquivo csv";
  }

  // Retira a primeira linha do arquivo, que contém apenas os nomes das colunas.
  string line;
  std::getline(archiveCSV, line);

 while (getline(archiveCSV, line)) {

    // Verifica se a linha não está vazia.
     list<string> lineOutput;
    if (!line.empty()) {

      // Separa a linha em palavras, utilizando o separador ','.
      separator(line, separatorCharacter, lineOutput);



      
      // verifica se a primeira coluna da linha não está vazia. 
      if(lineOutput.back() != ""){
        cout << lineOutput.back() << endl;
      }
    }
  }

}




