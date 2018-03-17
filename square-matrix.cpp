#include <string>
#include <vector>

class SquareMatric {
    std::vector<std::vector<int>> matrix;

    public:
        SquareMatric(std::initializer_list<std::vector<int>> m) {
            matrix = m;
        }

        SquareMatric(std::vector<std::vector<int>> m) {
            matrix = m;
        }

        std::vector<std::vector<int>> get() {
            return matrix;
        }

        SquareMatric add(SquareMatric operand) {
            std::vector<std::vector<int>> operandMatrix = operand.get();

            std::vector<std::vector<int>> newMatrix (operandMatrix.size());

            for (size_t m = 0; m < matrix.size(); ++m) {
                newMatrix[m] = std::vector<int> (matrix[m].size());

                for (size_t n = 0; n < matrix[m].size(); ++n) {
                    newMatrix[m][n] = matrix[m][n] + operandMatrix[m][n];
                }
            }

            return SquareMatric(newMatrix);
        }

        SquareMatric scalarMul(int v) {
            std::vector<std::vector<int>> newMatrix (matrix.size());

            for (size_t m = 0; m < matrix.size(); ++m) {
                newMatrix[m] = std::vector<int> (matrix[m].size());

                for (size_t n = 0; n < matrix[m].size(); ++n) {
                    newMatrix[m][n] = matrix[m][n] * v;
                }
            }

            return SquareMatric(newMatrix);
        }

        std::string toString() {
            std::string out;

            for (const auto& line : matrix) {
                out += "| ";

                for (const auto& value : line) {
                    out += std::to_string(value);
                    out += " ";
                }

                out += "|\n";
            }

            return out;
        }
};
