#ifndef PROCESSING_H
#define PROCESSING_H

#include <fstream>
#include <iostream>
#include <list>
#include <unordered_map>
#include <string>
#include <sstream>

#include "archiveReader.h"

using std::cin;
using std::cout;
using std::endl;
using std::getline;
using std::list;
using std::string;
using std::unordered_map;

void media(int colum1, int colum2, int colum3, list<string> lineInput, string state);

void desvioPadrao(int colum1, int colum2, int colum3, list<string> lineInput, string state);

void inputProcessing(int colum1, int colum2, int colum3, list<string> lineInput, string state);



#endif  // PROCESSING_H