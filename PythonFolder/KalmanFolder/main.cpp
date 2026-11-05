#include <iostream>
#include <Eigen/Dense>

int main() {

    Eigen::Matrix2d A;
    Eigen::Vector2d x;
    Eigen::Matrix2d B;

    A << 1, 2,
         3, 4;

    x << 5, 6;

    B << 1,2,
        3, 4;

    Eigen::Vector2d result = A * B * x;

    std::cout << "Matrix A:\n" << A << "\n\n";
    std::cout << "Vector x:\n" << x << "\n\n";
    std::cout << "Result:\n" << result << std::endl;

    return 0;
}