#include <iostream>
using namespace std;

int main() 
{
    int rows, cols, n;
    cout << "Enter rows, cols and number of non-zero elements: ";
    cin >> rows >> cols >> n;

    int mat[100][3], trans[100][3];

    cout << "Enter row, col, value for each non-zero element:\n";
    for (int i = 0; i < n; i++)
    cin >> mat[i][0] >> mat[i][1] >> mat[i][2];

    // Transpose
    for (int i = 0; i < n; i++) 
    {
        trans[i][0] = mat[i][1];
        trans[i][1] = mat[i][0];
        trans[i][2] = mat[i][2]; 
    }

    // Print
    cout << "\nTranspose in Triplet Representation:\n";
    cout << "Row Col Value\n";
    for (int i = 0; i < n; i++) 
    cout << trans[i][0] << " " << trans[i][1] << " " << trans[i][2] << endl;

    return 0;
}
