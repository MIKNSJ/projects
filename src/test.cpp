// ===== Established 2024-04-07 - 2024-0X-0X ===========
//
//  Functionality: Tests out each feature of the SVD.
//
// =====================================================



#include "helper.hpp"
#include "input.hpp"
#include "construct.hpp"
#include "operation.hpp"
#include <iostream>
#include <string>
#include <cassert>
#include <cmath>
#include <math.h>

#define MESSAGE_SUCCESS "Success"
#define MESSAGE_FAILURE "Failure"
#define CON_MATRIX_PASS "Construct Matrix Passes"
#define CON_MATRIX_FAIL "Construct Matrix Fails"
#define CSV_TO_DATA_PASS "CSV converted"
#define CSV_TO_DATA_FAIL "CSV was unable to be converted"
#define TRANSPOSE_PASS "Transpose successful"
#define TRANSPOSE_FAIL "Transpose unsuccessful"
#define MULTIPLY_PASS "Multiply successful"
#define MULTIPLY_FAIL "Multiply unsuccessful"
#define DET_PASS "Determinant matches"
#define DET_FAIL "Determinant does not match"
#define EVALUE_PASS "Eigenvalues match"
#define EVALUE_FAIL "Eigenvalues does not match"
#define NORMAL_PASS "Normalize pass"
#define NORMAL_FAIL "Normalize fail"
#define NS_PASS "Null space pass"
#define NS_FAIL "Null space fail"
#define U_VEC_PASS "U_VEC matches"
#define U_VEC_FAIL "U_VEC fails"
#define RREF_PASS "RREF matches"
#define RREF_FAIL "RREF fails"
#define STATUS FALSE



/**
 * Tests the construct_matrix individually
 * @return none
*/
void test_construct_matrix() {
    vector<double> vec = {1.0, 0.0, 0.0, 1.0};
    vector<vector<double>> exp_matrix = {{1.0, 0.0}, {0.0, 1.0}};
    vector<vector<double>> act_matrix = construct_matrix(vec);
    print_matrix(act_matrix);

    assert(exp_matrix == act_matrix && CON_MATRIX_FAIL);
    cout << CON_MATRIX_PASS << endl;
}



/**
 * Tests the csvToData
 * @param path The location of the csv file.
 * @return none
*/
void test_csvToData(char* & path) {
    vector<vector<double>> exp_data = {{1.0, 0.0, 0.0, 1.0}};
    vector<vector<double>> act_data = csvToData(path);
    vector<vector<double>> exp_matrix = construct_matrix(exp_data[0]);
    print_matrix(exp_matrix);

    vector<vector<double>> act_matrix = construct_matrix(act_data[0]);
    print_matrix(act_matrix);

    assert(exp_data == act_data && CSV_TO_DATA_FAIL);
    cout << CSV_TO_DATA_PASS << endl;
}



/**
 * Tests the csvToData
 * @param path The location of the csv file.
 * @return none
*/
void test_csvToData_two(char* & path) {
    vector<vector<double>> exp_data = {{2.0, 0.0, 0.0, 2.0},
    {3.0, 3.0, 3.0, 3.0}};
    vector<vector<double>> act_data = csvToData(path);

    vector<vector<double>> exp_matrix = construct_matrix(exp_data[0]);
    print_matrix(exp_matrix);
    vector<vector<double>> exp_matrix_two = construct_matrix(exp_data[1]);
    print_matrix(exp_matrix_two);

    vector<vector<double>> act_matrix = construct_matrix(act_data[0]);
    print_matrix(act_matrix);
    vector<vector<double>> act_matrix_two = construct_matrix(act_data[1]);
    print_matrix(act_matrix_two);

    assert(exp_data == act_data && CSV_TO_DATA_FAIL);
    cout << CSV_TO_DATA_PASS << endl;
}



/**
 * Checks the transposed matrix
 * @return nothing
*/
void test_transpose() {
    vector<vector<double>> matrix = {{1.0, 2.0}, {3.0, 4.0}};
    vector<vector<double>> exp_matrix = {{1.0, 3.0}, {2.0, 4.0}};
    vector<vector<double>> act_matrix;

    act_matrix = transpose(matrix);

    assert(exp_matrix == act_matrix && TRANSPOSE_FAIL);
    cout << TRANSPOSE_PASS << endl;
}



/**
 * Checks the product matrix
 * @return nothing
*/
void test_multiply() {
    vector<vector<double>> A = {{1, 2}, {3, 4}};
    vector<vector<double>> B = {{5, 6}, {7, 8}};
    vector<vector<double>> exp_matrix = {{19, 22}, {43, 50}};
    vector<vector<double>> act_matrix;

    act_matrix = multiply(A, B);

    assert(exp_matrix == act_matrix && MULTIPLY_FAIL);
    cout << MULTIPLY_PASS << endl;
}



/**
 * Checks the partial determinant/characteristic polynomial
 * @return nothing
*/
void test_determinant() {
    vector<vector<double>> matrix = {{1, 2}, {3, 4}};
    vector<double> exp_char_poly = {1, -5, -2};
    vector<double> act_char_poly;

    act_char_poly = determinant(matrix);

    assert(exp_char_poly == act_char_poly && DET_FAIL);
    cout << DET_PASS << endl;
}



/**
 * Checks the eigenvalues from the characteristic polynomial
 * @return nothing
*/
void test_find_eigenvalues() {
    vector<double> neg_dis_char_poly = {1, 2, 5}; // no roots
    vector<double> zero_dis_char_poly = {1, -4, 4}; // one root
    vector<double> pos_dis_char_poly = {1, -3, 2}; // two roots

    vector<double> exp_neg_dis = {};
    vector<double> exp_zero_dis = {2};
    vector<double> exp_pos_dis = {2, 1};

    vector<double> act_neg_dis;
    vector<double> act_zero_dis;
    vector<double> act_pos_dis;

    act_neg_dis = find_eigenvalues(neg_dis_char_poly);
    act_zero_dis = find_eigenvalues(zero_dis_char_poly);
    act_pos_dis = find_eigenvalues(pos_dis_char_poly);

    assert(exp_neg_dis == act_neg_dis && EVALUE_FAIL);
    assert(exp_zero_dis == act_zero_dis && EVALUE_FAIL);
    assert(exp_pos_dis == act_pos_dis && EVALUE_FAIL);
    cout << EVALUE_PASS << endl;
}



/**
 * Checks the unit vector
 * @return nothing
*/
void test_normalize() {
    vector<double> vec = {2.0, 2.0};
    vector<double> exp_vec = {sqrt(2.0)/2.0, sqrt(2.0)/2.0};
    vector<double> act_vec;

    vector<double> vec_two = {0.0, 1.0};
    vector<double> exp_vec_two = {0.0, 1.0};
    vector<double> act_vec_two;

    act_vec = normalize(vec);
    act_vec_two = normalize(vec_two);

    cout << exp_vec[0] << "," << exp_vec[1] << endl;
    cout << act_vec[0] << "," << act_vec[1] << endl;
    // assert(exp_vec == act_vec && NORMAL_FAIL);

    assert(exp_vec_two == act_vec_two && NORMAL_FAIL);
    cout << NORMAL_PASS << endl;
}



/**
 * Checks the null space
 * @return nothing
*/
void test_null_space() {
    vector<vector<double>> matrix = {{1, 3}, {0, 0}};
    vector<double> exp_basis = {-3, 1};
    vector<double> act_basis;

    act_basis = null_space(matrix);

    assert(exp_basis == act_basis && NS_FAIL);
    cout << NS_PASS << endl;
}



/**
 * Checks the u-vec
 * @return nothing
*/
void test_find_u_vec() {
    double s_value = 2;
    vector<vector<double>> matrix = {{1, 2}, {3, 4}};
    vector<double> eigenvector = {10, 20};

    vector<double> exp_u_vec = {25, 55};
    vector<double> act_u_vec;

    act_u_vec = find_u_vec(s_value, matrix, eigenvector);

    assert(exp_u_vec == act_u_vec && U_VEC_FAIL);
    cout << U_VEC_PASS << endl;
}



/**
 * Checks the rref
 * @return nothing
*/
void test_rref() {
    vector<vector<double>> matrix = {{15, -15}, {-15, 15}};
    vector<vector<double>> exp_matrix = {{1, -1}, {0, 0}};
    vector<vector<double>> act_matrix;

    act_matrix = rref(exp_matrix);

    assert(exp_matrix == act_matrix && RREF_FAIL);
    cout << RREF_PASS << endl;
}



/**
 * Enables for user input of a vector
 * @param argc
 * @param argv
 * @return 0 for no errors, otherwise 1.
*/
int main(int argc, char** argv) {
    // test_construct_matrix();
    // test_csvToData(argv[1]);
    // test_csvToData_two(argv[1]);
    // test_transpose();
    // test_multiply();
    // test_determinant();
    // test_find_eigenvalues();
    // test_normalize();
    // test_null_space();
    // test_find_u_vec();
    // test_rref();

    return 0;
}
