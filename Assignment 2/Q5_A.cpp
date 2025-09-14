#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the size of the matrix make it a square matrix: ";
    cin>>n;
    int mat[n][n];
    cout<<"Enter the ellements of the matrix:\n";
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>mat[i][j];
        }
    }

    cout<<"The ellements of digonal matrix are:\n";
    cout<<"Row Column Value\n";
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i==j)
            cout<<i<<" "<<i<<" "<<mat[i][j]<<endl;
        }
    }

    return 0;
}