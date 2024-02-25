#include <iostream>
using namespace std;

int main() {
    int matrix1[2][3] = {{1, 2, 3}, {4, 5, 6}};
    int matrix2[3][2] = {{7, 8}, {9, 10}, {11, 12}};
    int result[2][2] = {0};

    //The reason for initializing result as a 2x2 matrix is that when you multiply a 2x3 matrix by a 3x2 matrix.
    //the resulting matrix will have dimensions of 2x2. \
    //This is because the number of rows in the first matrix determines the number of rows in the result
    //and the number of columns in the second matrix determines the number of columns in the result.

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            for (int k = 0; k < 3; k++) {
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }

    cout << "Resultant Matrix:" << endl;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
