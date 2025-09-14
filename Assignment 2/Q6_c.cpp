#include <iostream>
using namespace std;

int main() {
    int r1, c1, n1, r2, c2, n2;
    cout << "Enter rows and cols of 1st matrix: ";
    cin >> r1 >> c1;
    cout << "Enter number of non-zero elements in 1st matrix: ";
    cin >> n1;

    int m1[100][3];
    cout << "Enter row col value for 1st matrix:\n";
    for (int i = 0; i < n1; i++)
    cin >> m1[i][0] >> m1[i][1] >> m1[i][2];

    cout << "Enter rows and cols of 2nd matrix: ";
    cin >> r2 >> c2;
    cout << "Enter number of non-zero elements in 2nd matrix: ";
    cin >> n2;

    int m2[100][3];
    cout << "Enter row col value for 2nd matrix:\n";
    for (int i = 0; i < n2; i++)
    cin >> m2[i][0] >> m2[i][1] >> m2[i][2];

    if (c1 != r2) 
    {
        cout << "Multiplication not possible!";
        return 0;
    }

    // Transpose of m2
    int m2T[100][3];
    for (int i = 0; i < n2; i++) 
    {
        m2T[i][0] = m2[i][1];
        m2T[i][1] = m2[i][0];
        m2T[i][2] = m2[i][2];
    }

    int res[200][3];
    int k = 0;

    // Multiply m1 and m2T
    for (int i = 0; i < r1; i++) 
    {
        for (int j = 0; j < c2; j++) 
        {
            int sum = 0;
            
            for (int p = 0; p < n1; p++) 
            {
                if (m1[p][0] == i) 
                {
                    for (int q = 0; q < n2; q++) 
                    {
                        if (m2T[q][0] == j && m2T[q][1] == m1[p][1]) 
                        {
                            sum += m1[p][2] * m2T[q][2];
                        }
                    }
                }
            }
            if (sum != 0) 
            {
                res[k][0] = i;
                res[k][1] = j;
                res[k][2] = sum;
                k++;
            }
        }
    }

    cout << "\nMultiplication in Triplet Representation:\n";
    cout << "Row Col Value\n";
    for (int i = 0; i < k; i++)
    cout << res[i][0] << " " << res[i][1] << " " << res[i][2] << endl;

    return 0;
}