#include <iostream>
using namespace std;

int main() {
    int rows, cols, n1, n2;
    cout << "Enter rows and cols of the matrices: ";
    cin >> rows >> cols;
    
    cout << "Enter number of non-zero elements in 1st matrix: ";
    cin >> n1;

    int m1[100][3];

    cout << "Enter row, col, value for each non-zero element of 1st matrix:\n";
    for (int i = 0; i < n1; i++)
    cin >> m1[i][0] >> m1[i][1] >> m1[i][2];

    cout << "Enter number of non-zero elements in 2nd matrix: ";
    cin >> n2;

    int m2[100][3];

    cout << "Enter row, col, value for each non-zero element of 2nd matrix:\n";
    for (int i = 0; i < n2; i++)
    cin >> m2[i][0] >> m2[i][1] >> m2[i][2];

    int sum[200][3];
    int i = 0, j = 0, k = 0;

    while (i < n1 && j < n2) 
    {
        if (m1[i][0] < m2[j][0] || (m1[i][0] == m2[j][0] && m1[i][1] < m2[j][1])) 
        {
            sum[k][0] = m1[i][0];
            sum[k][1] = m1[i][1];
            sum[k][2] = m1[i][2];
            i++; k++;
        }
        else if (m2[j][0] < m1[i][0] || (m1[i][0] == m2[j][0] && m2[j][1] < m1[i][1])) {
            sum[k][0] = m2[j][0];
            sum[k][1] = m2[j][1];
            sum[k][2] = m2[j][2];
            j++; k++;
        }
        else { // Same row & col → add values
            sum[k][0] = m1[i][0];
            sum[k][1] = m1[i][1];
            sum[k][2] = m1[i][2] + m2[j][2];
            i++; j++; k++;
        }
    }

    // Copy remaining elements
    while (i < n1) {
        sum[k][0] = m1[i][0];
        sum[k][1] = m1[i][1];
        sum[k][2] = m1[i][2];
        i++; k++;
    }
    while (j < n2) 
    {
        sum[k][0] = m2[j][0];
        sum[k][1] = m2[j][1];
        sum[k][2] = m2[j][2];
        j++; k++;
    }

    // Print result
    cout << "\nSum in Triplet Representation:\n";
    cout << "Row Col Value\n";
    for (int p = 0; p < k; p++)
    cout << sum[p][0] << " " << sum[p][1] << " " << sum[p][2] << endl;

    return 0;
}