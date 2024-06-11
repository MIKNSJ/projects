// ===== Established 2024-04-08 - 2024-0X-0X =====
//
//  Functionality: Reads and converts csv file.
//
// ===============================================



#ifndef input_hpp
#define input_hpp

#include <iostream>
#include <vector>
using namespace std;



/**
 * Converts csv contents to a vector
 * @param csvFile The csv file to be read.
 * @return A vector containing matrix data.
*/
vector<vector<double>> csvToData(char* & csvFile);



#endif