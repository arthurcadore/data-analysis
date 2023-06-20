# Author: Arhur Cadore M. Barcella
# GitHub: arthurcadore
## data-analysis

Program to analise huge datasets in c++

After compile the code, run it with cmake changing state define variable, or compile it for use with shell script

With shell script, the program excecute multiple times, to generate results for all states. 

## to compile code: 

cmake CMakeList.txt
make run

## to compile code (for scripting): 
g++ src/main.cpp src/archiveReader.cpp -o binaryCode 
sudo chmod +x runner.sh && chmod +x binaryCode
./runner.sh

