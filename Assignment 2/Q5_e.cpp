#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the size of the (square) matrix: ";
    cin >> n;

    int mat[100][100];
    cout << "Enter the elements of the matrix:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> mat[i][j];
        }
    }
    
    bool symmetric = true;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (mat[i][j] != mat[j][i]) {
                symmetric = false;
                break;
            }
        }
        if (!symmetric) break;
    }

    if (!symmetric) {
        cout << "\nThe given matrix is NOT symmetric.\n";
        return 0;
    }

    cout << "\nThe elements of Symmetric matrix (Triplet Form) are:\n";
    cout << "Row Column Value\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (mat[i][j] != 0) {
                cout << i << " " << j << " " << mat[i][j] << endl;
            }
        }
    }

    return 0;
}
