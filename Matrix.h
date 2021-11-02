#pragma once
#include <iostream>
#include <vector>
#include <initializer_list>
class Matrix {
    std::vector<std::vector<double>> vec;
public:
    Matrix(std::vector<std::vector<double>> &i_vec);
    void print();
    double determinant_search();

};


