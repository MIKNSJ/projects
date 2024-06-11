// ===== Established 2024-04-08 - 2024-0X-0X =====
//
//  Functionality: Reads and converts csv file.
//
// ===============================================



#include "input.hpp"
#include <vector>
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>



vector<vector<double>> csvToData(char* & pathCSVFile) {
    string str_topLeft, str_topRight, str_bottomLeft, str_bottomRight;
    double topLeft, topRight, bottomLeft, bottomRight;
    vector<vector<double>> data;
    ifstream file(pathCSVFile);
    string current_line;

    while(getline(file, current_line)) {
        istringstream extracted_line(current_line);
    
        getline(extracted_line, str_topLeft, ',');
        getline(extracted_line, str_topRight, ',');
        getline(extracted_line, str_bottomLeft, ',');
        getline(extracted_line, str_bottomRight, '\n');

        topLeft = stod(str_topLeft);
        topRight = stod(str_topRight);
        bottomLeft = stod(str_bottomLeft);
        bottomRight = stod(str_bottomRight);

        data.push_back({topLeft, topRight, bottomLeft, bottomRight}); 
    }
    file.close();

    return data;
}
