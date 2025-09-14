#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the size of the (square) matrix: ";
    cin >> n;

    int mat[100][100];
    cout << "Enter the elements of the matrix:\n";
    for (int i = 0; i < n; i++) 
    {
        for (int j = 0; j < n; j++) 
        {
            cin >> mat[i][j];
        }
    }

    cout << "\nThe elements of Tridiagonal matrix are:\n";
    cout << "Row Column Value\n";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++) 
        {
            if (i == j || j == i + 1 || i == j + 1) 
            {
                if (mat[i][j] != 0) 
                cout << i << " " << j << " " << mat[i][j] << endl;
            }
        }
    }

    return 0;
}
