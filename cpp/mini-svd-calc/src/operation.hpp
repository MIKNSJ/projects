// ===== Established 2024-04-11 - 2024-0X-0X ========
//
//  Functionality: Provides matrix operations.
//
// ==================================================



#ifndef operation_hpp
#define operation_hpp

#include <vector>
using namespace std;



/**
 * Finds the partial determinant of a matrix.
 * @param matrix A matrix
 * @return A characteristic polynomial.
*/
vector<double> determinant(vector<vector<double>> matrix);



/**
 * Finds the eigenvalues of a matrix.
 * NOTE: We are only considering real eigenvalues.
 * @param char_poly The characteristic polynomial.
 * @return The eigenvalues of a matrix, if the discriminant is not negative.
*/
vector<double> find_eigenvalues(vector<double> char_poly);



/**
 * Transposes a matrix.
 * @param matrix The original matrix.
 * @return A transposed matrix.
*/
vector<vector<double>> transpose(vector<vector<double>> matrix);



/**
 * Matrix muliplication
 * @param A Matrix factor
 * @param B Another matrix factor
 * @return The product matrix between A and B.
*/
vector<vector<double>> multiply(vector<vector<double>> A,
    vector<vector<double>> B);



/**
 * RREF a matrix.
 * @param matrix A matrix.
 * @return A RREF matrix.
*/
vector<vector<double>> rref(vector<vector<double>> matrix);



/**
 * Finds the null space of a matrix.
 * @param matrix A rrefed matrix
 * @return A basis of a matrix.
*/
vector<double> null_space(vector<vector<double>> matrix);



/**
 * Finds u-vectors.
 * @param s_value The singular value.
 * @param matrix The original matrix.
 * @param eigenvector The eigenvector for the singular value.
 * @return A u-vector.
*/
vector<double> find_u_vec(double s_value,
    vector<vector<double>> matrix,
    vector<double> eigenvector);



/**
 * Normalizes a vector.
 * @param vec A vector.
 * @return A normalized/unit vector.
*/
vector<double> normalize(vector<double> vec);



#endif