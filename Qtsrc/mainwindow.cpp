// ===== Established 2024-05-22 - 2024-0X-0X ==========
//
//  Functionality: Builds the SVD and window elements.
//
// ====================================================



#include "helper.hpp"
#include "construct.hpp"
#include "operation.hpp"
#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <iostream>
#include <cmath>



MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::MainWindow), status(0){
    ui->setupUi(this);
}

MainWindow::~MainWindow(){
    delete ui;
}



/**
* Converts QtTextEdit box contents to vector data.
* @param data The data to store the matrix.
* @return Nothing.
*/
void MainWindow::getQtTextData(vector<double> &data) {
    data.push_back(ui->matAEntryOne->toPlainText().toDouble());
    data.push_back(ui->matAEntryTwo->toPlainText().toDouble());
    data.push_back(ui->matAEntryThree->toPlainText().toDouble());
    data.push_back(ui->matAEntryFour->toPlainText().toDouble());
}



void MainWindow::on_pushButton_clicked(){
    vector<double> list;
    getQtTextData(list);

    vector<vector<double>> A = construct_matrix(list);
    vector<vector<double>> A_trans = transpose(A);
    vector<vector<double>> ATA = multiply(A_trans, A);
    vector<vector<double>> ATA_V;
    vector<vector<double>> rref_ATA_V;

    double s_value;
    vector<double> v_0;
    vector<double> v_1;
    vector<double> u_0;
    vector<double> u_1;

    vector<vector<double>> u_matrix;
    vector<vector<double>> s_matrix;
    vector<vector<double>> v_matrix;

    vector<double> char_poly = determinant(ATA);
    vector<double> eigenvalues = find_eigenvalues(char_poly);

    // If two eigenvalues are the same or non-real matrix, then terminate.
    if (eigenvalues[0] == eigenvalues[1] || eigenvalues.size() == 0) {
        ui->systemLabel->setText("Please re-enter values of a real matrix with distinct eigenvalues.");
        return;
    }

    for (int j = 0; j < (int)eigenvalues.size(); j++) {
        s_value = sqrt(eigenvalues[j]);
        ATA_V = ATA;
        ATA_V[0][0] = ATA_V[0][0] - eigenvalues[j];
        ATA_V[1][1] = ATA_V[1][1] - eigenvalues[j];
        rref_ATA_V = rref(ATA_V);

        if (j == 0) {
            v_0 = null_space(rref_ATA_V);
            u_0 = find_u_vec(s_value, A, v_0);
            v_0 = normalize(v_0);
            u_0 = normalize(u_0);

            v_matrix.push_back(v_0);
            u_matrix.push_back(u_0);

        } else {
            v_1 = null_space(rref_ATA_V);
            if (s_value != 0) {
                u_1 = find_u_vec(s_value, A, v_1);
            } else {
                u_1 = v_1;
            }

            v_1 = normalize(v_1);
            u_1 = normalize(u_1);

            v_matrix.push_back(v_1);
            u_matrix.push_back(u_1);
        }

    }

    s_matrix = {{sqrt(eigenvalues[0]), 0.0}, {0.0, sqrt(eigenvalues[1])}};
    u_matrix = transpose(u_matrix);

    ui->matUEntryOne->setText(QString::number(u_matrix[0][0]));
    ui->matUEntryTwo->setText(QString::number(u_matrix[0][1]));
    ui->matUEntryThree->setText(QString::number(u_matrix[1][0]));
    ui->matUEntryFour->setText(QString::number(u_matrix[1][1]));

    ui->matSEntryOne->setText(QString::number(s_matrix[0][0]));
    ui->matSEntryTwo->setText(QString::number(s_matrix[0][1]));
    ui->matSEntryThree->setText(QString::number(s_matrix[1][0]));
    ui->matSEntryFour->setText(QString::number(s_matrix[1][1]));

    ui->matVEntryOne->setText(QString::number(v_matrix[0][0]));
    ui->matVEntryTwo->setText(QString::number(v_matrix[0][1]));
    ui->matVEntryThree->setText(QString::number(v_matrix[1][0]));
    ui->matVEntryFour->setText(QString::number(v_matrix[1][1]));

    ui->systemLabel->setText("Success. See below for the full decomposition.");
}

