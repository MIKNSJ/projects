// ===== Established 2024-04-08 - 2024-0X-0X =====
//
//  Functionality: Provides debugging tools.
//
// ===============================================



#ifndef helper_hpp
#define helper_hpp

#include <vector>
#include "mainwindow.h"
#include <QApplication>
using namespace std;



/**
 * Prints out a matrix.
 * @param matrix The 2D vector.
 * @return none
*/
void print_matrix(vector<vector<double>> matrix);



/**
 * Prints out a vector.
 * @param vec A vector.
 * @return none
*/
void print_vector(vector<double> vec);



#endif
