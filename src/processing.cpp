/*
Author: Arhur Cadore M. Barcella

GitHub: arthurcadore

This file contains the main code for the program.

This code is responsible for the user interface and the call of the other functions.

*/

#include "processing.h"

unordered_map<string, list<string>> dataDeathTable;
unordered_map<string, list<string>> dataConfirmedTable;
unordered_map<string, list<string>> dataPopulationConfirmed;

void media(int colum1, int colum2, int colum3, list<string> lineInput, string state){}

void desvioPadrao(int colum1, int colum2, int colum3, list<string> lineInput, string state){}

void inputProcessing(int deaths, int confirmed, int population, string date, string state){}

// slide de correlação pra casos confirmados e mortes 
// corelação de população e mortes 
// área em (m2) de cada estado. 
// densidade populacional com desvio padrão de cada estado. 