#include <iostream>

#include "./square-matrix.cpp"

int main() {

    SquareMatric a {
        {1,2,3},
        {4,5,6},
    };

    SquareMatric b {
        {1,2,3},
        {4,5,6},
    };

    std::cout << a.toString() << std::endl;
    std::cout << b.toString() << std::endl;

    std::cout << "+" << std::endl;
    std::cout << a.add(b).toString() << std::endl;

    std::cout << a.toString() << std::endl;

    std::cout << "* 5" << std::endl;
    std::cout << a.scalarMul(5).toString() << std::endl;

    return 0;
}
