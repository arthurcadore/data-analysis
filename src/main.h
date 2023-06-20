#ifndef MAIN_H
#define MAIN_H

#include <fstream>
#include <iostream>
#include <string>
#include <sstream>

// definições globais de input ao programa: 
#define INPUT1 "caso_full.csv";
#define INPUT2 "AC"
#define INPUT3 false

// definições das colunas de operação: 
#define NOVOSMORTOS 17
#define NOVOSCONFIRMADOS 16
#define POPULACAOESTIMADA 5
#define INDEXESTADO 15
#define COLUNADATA 2


#include "archiveReader.h"

using std::cin;
using std::cout;
using std::endl;
using std::getline;
using std::string;

#endif  // MAIN_H