#ifndef ARCHIVEREADER_H
#define ARCHIVEREADER_H

#include <fstream>
#include <list>
#include <sstream>
#include <unordered_map>
#include <string>
#include <iostream>

#include "processing.h"

#define NOVOSMORTOS 17
#define NOVOSCONFIRMADOS 16
#define POPULACAOESTIMADA 5
#define INDEXESTADO 15
#define COLUNADATA 2

using std::getline;
using std::ifstream;
using std::list;
using std::string;
using std::stringstream;
using std::unordered_map;
using std::cout;
using std::endl;

void importerData(string fileName, string atualState);
void statesReader(string fileName, string stateIndex); 
void separator(string line, char separatorCharacter, string lineOutput[], int expectedSize, bool &sizeVerifier);

#endif  