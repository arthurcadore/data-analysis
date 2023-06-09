#ifndef ARCHIVEREADER_H
#define ARCHIVEREADER_H

#include <fstream>
#include <list>
#include <sstream>
#include <unordered_map>
#include <string>
#include <iostream>

using std::getline;
using std::ifstream;
using std::list;
using std::string;
using std::stringstream;
using std::unordered_map;
using std::cout;
using std::endl;

void importer(unordered_map<string, string> &dataTable, string fileName);


#endif  