#include <iostream>
#include <clocale>
using namespace std;

const int rows = 4;
const int columns = 4;

void swapRows(int matrix[][4], int row1, int row2) {  
      
    for (int col = 0; col < 4; col++) {  // предполагаем, что матрица имеет 4 столбца  
        int temp = matrix[row1][col];  
        matrix[row1][col] = matrix[row2][col];  
        matrix[row2][col] = temp;  
    }  
}

void sortByThirdColumn(int matrix[][columns]) {
for (int i = 0; i < rows - 1; i++)
  {
    for (int j = i + 1; j < rows; j++) {
        if (matrix[i][2] > matrix[j][2]) {
            swapRows(matrix, i, j);
        }
    }
}
}

void printMatrix(int matrix[][columns]) {
for (int i = 0; i < rows; i++) {
    for (int j = 0; j < columns; j++) {
        cout << matrix[i][j] << ' ';
    }
    cout << '\n';
}
}

int main() {
    setlocale(LC_ALL,"ru_RU.UTF-8");
    int matrix[rows][columns] = {
        {10, 2, 3, 4},
        {5, 6, 17, 81},
        {59, 10, 11, 42},
        {12, 16, 1, 16}
};

cout << "До сортировки:\n";
printMatrix(matrix);

sortByThirdColumn(matrix);

cout << "\nПосле сортировки:\n";
printMatrix(matrix);
return 0;
}