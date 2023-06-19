/*
Author: Arhur Cadore M. Barcella

GitHub: arthurcadore

This file contains the implementation of the archiveReader class.

This code collect the data from csv archive and store it in a hash table.

*/

#include "archiveReader.h"

list<string> states;

char separatorCharacter = ',';


// função que recebe uma string como imput, o caracter separador e um vetor de strings para armazenar as palavras separadas. 
void separator(string line, char separatorCharacter, string lineOutput[], int expectedSize, bool &sizeVerifier){

  // Cria um fluxo de string para a linha.
  stringstream ss(line);

  // Cria uma variável para armazenar cada palavra da linha.
  string word;

  // Cria um contador para armazenar a posição da palavra no vetor.
  int i = 0;

  // Separa a linha em palavras, utilizando o separador ','.
  while (getline(ss, word, separatorCharacter)) {

    // Armazena a palavra no vetor.
    lineOutput[i] = word;

    // Incrementa o contador.
    i++;
  }

  // Verifica se o tamanho do vetor é o esperado.
  if (i != expectedSize) {
    // Caso não seja, retorna exeção.
    sizeVerifier = false;
    throw "Erro ao ler o arquivo csv";
  }
}

// função que recebe o nome do arquivo e o estado que se deseja filtrar.
void statesReader(string fileName, string stateIndex){

  // Abre arquivo CSV
  ifstream archiveCSV(fileName);

  if (!archiveCSV.is_open()) {
    // Caso haja erro ao abrir o arquivo, retorna exeção.
    throw "Erro ao abpush_back(state);rir o arquivo csv";
  }

  // Retira a primeira linha do arquivo, que contém apenas os nomes das colunas.
  string line;
  getline(archiveCSV, line);

 while (getline(archiveCSV, line)) {

    // Verifica se a linha não está vazia.
     string vetOutput[18];
     bool sizeVerifier = true;
     int expectedSize = 18;
    if (!line.empty()) {

      // Separa a linha em palavras, utilizando o separador ','.
      separator(line, separatorCharacter, vetOutput, expectedSize, sizeVerifier);
        if(sizeVerifier){
        // coleta a coluna do vetor correspondente ao estado;
        string state = vetOutput[INDEXESTADO];
        states.push_back(state);

        if(vetOutput[INDEXESTADO] == stateIndex){

          // coleta a coluna do vetor correspondente ao numero de mortos;
          int deaths = stoi(vetOutput[NOVOSMORTOS]);

          // coleta a coluna do vetor correspondente ao numero de casos confirmados;
          int confirmed = stoi(vetOutput[NOVOSCONFIRMADOS]);

          // coleta a coluna do vetor correspondente ao numero de casos confirmados;
          int population = stoi(vetOutput[POPULACAOESTIMADA]);

          string date = (vetOutput[COLUNADATA]);

          inputProcessing(deaths, confirmed, population, date, stateIndex);

      
          cout << stateIndex + " " << deaths << " " << confirmed <<  " " << population << " " << date << endl;
        }
        }
        
    }
  }
}




