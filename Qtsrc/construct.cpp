// ===== Established 2024-04-07 - 2024-0X-0X =====
//
//  Functionality: Constructs the matrix.
//
// ===============================================



#include "construct.hpp"
#include <iostream>



vector<vector<double>> construct_matrix(vector<double> vec) {
    vector<vector<double>> matrix;
    vector<double> row_vec_one;
    vector<double> row_vec_two;
    
    for (int i = 0; i < (int)vec.size(); i++) {
        if (i < 2) {
            row_vec_one.push_back(vec[i]);
        } else {
            row_vec_two.push_back(vec[i]);
        }
    }

    matrix.push_back(row_vec_one);
    matrix.push_back(row_vec_two);

    return matrix;
}
