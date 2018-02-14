
#ifndef __MATRIX__
#define __MATRIX__

#include<vector> 
#include<iostream>

using namespace std;

class Matrix{

public:
    
    int n_rows, n_col;
    vector<vector<float> > matrix;

    Matrix(int rows, int columns){
        n_rows = rows;
        n_col = columns;

        
        for(int i = 0; i < n_rows; i++){
            vector<float> novo;
            for (int j = 0; j < n_col; j++){
                novo.push_back(0);
            }
            matrix.push_back(novo);
        }
        
    }

    void print(){
        for(int i = 0; i < n_rows; i++){
            for (int j=0; j < n_col; j++){
                cout << matrix[i][j] << " ";
            }
            cout << endl;
        }
    }

    void add(float number){
        for (int i=0; i < n_rows; i++){
            for(int j = 0; j < n_col; j++){
                matrix[i][j] += number;
            }
        }
    }

    void mul(float number){
        for (int i=0; i < n_rows; i++){
            for(int j = 0; j < n_col; j++){
                matrix[i][j] *= number;
            }
        }
    }

};




#endif