#include <iostream>
#include <time.h>       //Time library added to measure time taken by a function 
#define SIZE 1000       //Set the size of matrix
#define type double     //Set the type of matrix (double - float)
#define block_size 10   //System block size (optimum value as a result of tests)

using namespace std;

//Creates the matrix with size of macro SIZE
type** create_matrix();

//Fill all the values of matrix with given value
void set_the_matrix(type** matrix, type value);

//Prints the matrix
void print_the_matrix(type** matrix);

//Calculates multiplication of A and B matrices and returns result matrix ( AxB=C )
void matrix_multiplication(type** matrix_A, type** matrix_B, type** matrix_C);

//Deletes the matrix
void delete_the_matrix(type** matrix);