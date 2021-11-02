#include <iostream>
#include <vector>
#include "Matrix.h"
#include "MyRange.h"

void add_sum(std::vector<double> &vec){
    double sum{};
    int size = vec.size();
    for(auto &i:vec){
        sum += i;
    }

    vec.push_back(sum/size);
}

int main() {

    /*----------Lesson 1-----------*/
    std::vector<double> v{1,2,3,4,5,6,7,8,9};
    for(auto &i: v) std::cout << i << " ";
    std::cout << std::endl;
    add_sum(v);
    for(auto &i: v) std::cout << i << " ";
    std::cout << "\n\n";

    /*----------Lesson 2-----------*/
    std::vector<std::vector<double>> vec{
            {2, 1,  -4},
            {6, -3, 5},
            {1, 0,  -1}
    };
    Matrix m(vec);
    m.print();
    std::cout << "Determinant = " << m.determinant_search();
    std::cout << "\n\n";

    /*----------Lesson 3-----------*/
    MyRange range{5, 2, 7, 123, 87, 32, 1, 48};

    for (auto &i: range) {
        std::cout << i << " ";
    }
    return 0;
}
