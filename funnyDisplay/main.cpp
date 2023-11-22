#include <iostream>
#include "matrix.h"

using namespace std;

// // std::ostream &operator<<(std::ostream &os, const int &matrix)
// // {
// //     os << "hello world";
// //     return os;
// // }

// int main()
// {
//     // Matrix matrix;
//     // cout << matrix.matrix << endl;
//     // int matrix[3][3] = {
//     //     {1, 2, 3},
//     //     {4, 5, 6},
//     //     {7, 8, 9},
//     // };
//     cout << "matrix" << endl;
//     return 0;
// }

int main()
{
    GenerateMatrix dimensions(3, 3);
    Matrix myMatrix(dimensions);

    // Print the matrix
    myMatrix.printMatrix();

    return 0;
}
