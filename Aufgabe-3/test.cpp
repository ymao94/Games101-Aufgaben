#include <iostream>
#include <eigen3/Eigen/Eigen>

using namespace Eigen;

int main() {
    Vector3f V = {1, 2, 3};
    std::cout << V(1) << std::endl;
}