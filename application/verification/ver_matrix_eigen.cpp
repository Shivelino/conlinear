/*********************************************************************
 * @file    ver_matrix_eigen.cpp    
 * @brief   
 * @details  
 * @author  Shivelino
 * @date    2024.4.12
 * @version 
 * @par Copyright(c): Concloud Software Corporation
 * @par todo:
 * @par history: 
 *********************************************************************/
#include <iostream>

#include "matrix.h"

int main() {
    using namespace conlinear;

    MatrixEigen<double, 3, 3> mat1;
    mat1.set_element(0, 0, 1);
    mat1.set_element(1, 1, 2);
    mat1.set_element(2, 2, 3);
    double elem_0_0 = mat1.element(0, 0);
    double det = mat1.determinant();

    MatrixEigen<double, 3, 3> mat2;
    mat2.set_element(0, 0, 3);
    mat2.set_element(1, 1, 2);
    mat2.set_element(2, 2, 1);

    mat1 += mat2;
    mat1.debug_print();
    mat1 -= mat2;
    mat1.debug_print();

    mat1 *= mat2;
    mat1.debug_print();

    MatrixEigen<double, 3, 3> mat3;
    mat3.set_element(0, 0, 1);
    mat3.set_element(0, 1, 2);
    mat3.set_element(0, 2, 3);
    mat3.set_element(1, 0, 4);
    mat3.set_element(1, 1, 5);
    mat3.set_element(1, 2, 6);
    mat3.set_element(2, 0, 7);
    mat3.set_element(2, 1, 8);
    mat3.set_element(2, 2, 10);
    mat3.guass_simply();
    mat3.debug_print();

    return 0;
}
