#include "Matrix.h"

void Matrix::print() {
    for (const auto &i : vec) {
        for (const auto &a : i){
            std::cout << a << " ";
        }
        std::cout << std::endl;
    }
}

Matrix::Matrix(std::vector<std::vector<double>> &i_vec) {
    vec = std::move(i_vec);
}

double Matrix::determinant_search() {
    if (vec.empty()) {
        std::cerr << "the matrix is empty" << std::endl;
        return 0;
    }
    for (auto &i: vec) {
        if (vec.size() != i.size()) {
            std::cerr << !"the matrix is not square" << std::endl;
            return 0;
        }
    }

    if (vec.size() == 1) return vec[0][0];
    if (vec.size() == 2) return vec[0][0] * vec[1][1] - vec[0][1] * vec[1][0];
    if (vec.size() == 3) {
        return (vec[0][0] * vec[1][1] * vec[2][2])
               + (vec[0][1] * vec[1][2] * vec[2][0])
               + (vec[1][0] * vec[2][1] * vec[0][2])
               - (vec[0][2] * vec[1][1] * vec[2][0])
               - (vec[0][1] * vec[2][2] * vec[1][0])
               - (vec[0][0] * vec[1][2] * vec[2][1]);
    }
    std::cerr << "Error";

    return 0;
}


