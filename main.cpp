#include "functions.h"  //Imports the all matrix functions needed
/* 
    AxB=C Matrix multiplication represented by matrix_1, matrix_2 and matrix_3 
    sFunction contains serial functions and pFunction contains parallel OpenMP functions  
                                                                                            */
int main()
{
    //Create matrices
    type** matrix_1 = create_matrix();
    type** matrix_2 = create_matrix();
    type** matrix_3 = create_matrix();

    set_the_matrix(matrix_1, 1.0);    //Fill all the values of matrix_1 with 1.0
    set_the_matrix(matrix_2, 1.0);    //Fill all the values of matrix_1 with 1.0
    set_the_matrix(matrix_3, 0.0);    //Fill all the values of matrix_1 with 0.0
    
    matrix_multiplication(matrix_1,matrix_2,matrix_3);
    printf("First value of the result matrix: %lf\n\n",matrix_3[0][0]);
    
    return 0;
}