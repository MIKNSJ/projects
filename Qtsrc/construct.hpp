// ===== Established 2024-04-07 - 2024-0X-0X =====
//
//  Functionality: Constructs the matrix.
//
// ===============================================



#ifndef construct_hpp
#define construct_hpp

#include <vector>
#include "mainwindow.h"
#include <QApplication>
using namespace std;



/**
 * Returns a matrix given a list of values
 * @param vec A list of values to be contained in the matrix.
 * @return A 2-Dimensional matrix.
*/
vector<vector<double>> construct_matrix(vector<double> vec);



#endif
