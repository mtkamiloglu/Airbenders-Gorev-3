#include <iostream>
#include <stdio.h>
#include <vector>

template <typename T> 
std::vector<std::vector<T> > create_matrix(T x, int rows, int columns){
    std::vector<std::vector<T> > matrix(rows);
    
    for(int i = 0; i<rows; i++){
        matrix[i].resize(columns);
        for(int j = 0; j<columns; j++){
            matrix[i][j] = x;
        }
    }
    return matrix;
}

int main(){
    std::vector<std::vector<int> > matrix;
    int rows = 3, columns = 4;

    matrix = create_matrix((int)5, rows, columns);

    for(int i = 0; i<rows; i++){
        for(int j=0; j<columns; j++){
            std::cout << matrix[i][j] << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}

