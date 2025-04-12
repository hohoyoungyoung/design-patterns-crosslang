#include <iostream>
#include <Eigen/Dense>

int main() {
    // A: 3x2 행렬
    Eigen::Matrix<double, 3, 2> A;
    A << 1, 2,
         3, 4,
         5, 6;

    // B: 2x3 행렬
    Eigen::Matrix<double, 2, 3> B;
    B << 7, 8, 9,
         10, 11, 12;

    // 결과: 3x3 행렬
    Eigen::Matrix<double, 3, 3> C = A * B;

    std::cout << "결과 행렬:\n" << C << std::endl;

    return 0;
}

