/*
Author: Arhur Cadore M. Barcella

GitHub: arthurcadore

This file contains the implementation of the archiveReader class.

This code collect the data from csv archive and store it in a hash table.

*/

#include "archiveReader.h"

list<string> states;

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

void importerData(string fileName, string atualState){

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

      // verifica se a primeira coluna da linha não está vazia e se a ultima coluna é a coluna de estado. 
      if(lineOutput.front() != "" && lineOutput.back() == atualState){

        // importa os dados já triados para a função de processamento. 
        inputProcessing(COLUNACONFIRMADOS, COLUNAMORTOS, COLUNAPOPULACAO, lineOutput, atualState);
      }
    }
  }

}


void statesReader(string fileName, int stateColum){

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

        // retira as colunas não necessárias (N vezes) para acessar a coluna dos estados. 
        for(int i = 0; i < stateColum; i++){
        lineOutput.pop_back();
        }

        // coleta ultima coluna da linha, que contém o nome do estado, e armazena em uma lista.
        string state = lineOutput.back();
        states.push_back(state);
    }
  }

  // ordena os estados e retira os estados repetidos.
  states.sort();
  states.unique();

  // imprime os estados (para debug);
  // for(auto i : states){
  //   cout << i << endl;
  // }
}




