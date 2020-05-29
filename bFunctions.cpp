#include "functions.h"  //Imports the all matrix functions needed

type** create_matrix(){
    type** created_matrix = new type*[SIZE];
    for(int i = 0; i < SIZE; i++){
        created_matrix[i] = new type[SIZE];
    }
    return created_matrix;
}

void set_the_matrix(type** matrix, type value){
    for(int i=0; i<SIZE; i++){
        for(int j=0; j<SIZE; j++){
             matrix[i][j] = value;
        }
    }
}

void print_the_matrix(type** matrix){
    cout << endl;
    for(int i=0; i<SIZE; i++){
        for(int j=0; j<SIZE; j++){
            cout << matrix[i][j];
        }
        cout << endl;
    }
}

void matrix_multiplication(type** matrix_A, type** matrix_B, type** matrix_C){
    clock_t start, end;     //Start and end variables defined
    double cpu_time_used;   //Total cpu time defined as double 
    
    cout << endl << SIZE << " x " << SIZE << " block_size(optimized) matrix multiplication calculating ...\n";
    start = clock();
    
    /* For loop recreated according to block_size value */
    for(int i=0; i<SIZE; i+=block_size){
        for(int j=0; j<SIZE; j+=block_size){
            for(int k=0; k<SIZE; k+=block_size){
                for(int ii=i; ii<i+block_size; ii++){
                    for(int jj=j; jj<j+block_size; jj++){
                        for(int kk=k; kk<k+block_size; kk++){
                            matrix_C[ii][jj] += matrix_A[ii][kk]*matrix_B[kk][jj];
                        }
                    }
                } 
            }
        }
    }
    
    end = clock();
    cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
    
    cout << "AxB=C multiplication successfully done in " << cpu_time_used << " seconds!\n";
}

void delete_the_matrix(type** matrix){ 
    for(int i = 0; i < SIZE; i++)
        delete matrix[i];
    delete matrix;
}