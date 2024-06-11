// ===== Established 2024-04-08 - 2024-0X-0X =====
//
//  Functionality: Provides debugging functions.
//
// ===============================================



#include "helper.hpp"
#include <iostream>



/**
 * Prints out a matrix.
 * @param matrix The 2D vector.
 * @return none
*/
void print_matrix(vector<vector<double>> matrix) {
    cout << "========== print_matrix() ==========" << endl;
    for (int i = 0; i < (int)matrix.size(); i++) {
        cout << " [ ";
        for (int j = 0; j < (int)matrix[i].size(); j++) {
            cout << matrix[i][j] << " ";

            if (i == 0 && j == 1) {
                cout << "]" << endl;
            }
        }

        if (i == 1) {
            cout << "]" << endl;
        }
    }
    cout << "=============== END ================" << endl;
}



/**
 * Prints out a vector.
 * @param vec A vector.
 * @return none
*/
void print_vector(vector<double> vec) {
    cout << "========== print_vector() ==========" << endl;
    cout << " [ ";
    for (int i = 0; i < (int)vec.size(); i++) {
        cout << vec[i] << " ";
    }
    cout << "]" << endl;
    cout << "=============== END ================" << endl;
}