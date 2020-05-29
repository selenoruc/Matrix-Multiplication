# Matrix Multiplication 
The purpose of the project is to multiply two matrices in the size of 1K to 5K in 3 different ways and analyze the effects on performance.

The multiplication of two matrices is to be implemented as:
- a serial program
- an OpenMP shared memory program (parallel)
- a loop blocking method program
## Installation 
You can install the application with clone this repository by the commands given below
```
# clone the repository
$ git clone https://github.com/selenkutanoglu/Matrix-Multiplication
```
## Editing 
Matix size, value type of the matrix and the block size of for looping part defined as macro variables in ``` functions.h ``` file.
```
#define SIZE 1000       //Set the size of matrix
#define type double     //Set the type of matrix (double - float)
#define block_size 10   //System block size (optimum value as a result of tests)
```
### Project Files
```
. bFunctions.cpp          loop blocing program functions
. functions.h             whole funtions declarations, matrix parameters and libraries needed
. main.cpp                main program 
. pFunctions.cpp          OpenMP parallel program functions
. README.md               This README file you're looking
. sFunctions.cpp          serial program functions
```
## Compile and run
To compile the serial program, ``` sFunctions.cpp ``` and ``` main.cpp ``` will be to compiled with ```g++``` and object file named as ```serial```.
```
$ g++ -o serial sFunctions.cpp main.cpp
$ ./serial
```
To compile the OpenMP parallel program, ``` pFunctions.cpp ``` and ``` main.cpp ``` will be to compiled with ```g++``` (with -fopenmp parameter) and object file named as ```parallel```.
```
$ g++ -O -Wall -std=c++0x -g -fopenmp -o parallel pFunctions.cpp main.cpp
$ ./parallel
```
To compile the loop blocking program, ``` bFunctions.cpp ``` and ``` main.cpp ``` will be to compiled with ```g++``` and object file named as ```block```.
```
$ g++ -o block bFunctions.cpp main.cpp
$ ./block
```

