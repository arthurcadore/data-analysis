#ifndef ARCHIVEREADER_H
#define ARCHIVEREADER_H

#include <fstream>
#include <list>
#include <sstream>
#include <unordered_map>
#include <string>
#include <iostream>

#include "processing.h"

#define COLUNAMORTOS 5
#define COLUNACONFIRMADOS 7 
#define COLUNAPOPULACAO 10

using std::getline;
using std::ifstream;
using std::list;
using std::string;
using std::stringstream;
using std::unordered_map;
using std::cout;
using std::endl;

void importerData(string fileName, string atualState);
void statesReader(string fileName, int stateColum); 

#endif  