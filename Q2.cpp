#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[100];
    cout << "Enter the elements of the array:\n";
    for (int i = 0; i < n; i++)
    cin >> arr[i];

    for (int i = 0; i < n; i++) 
    {
        for (int j = i + 1; j < n; ) 
        {
            if (arr[i] == arr[j]) 
            {
                for (int k = j; k < n - 1; k++)
                arr[k] = arr[k + 1];

                n--;
            } 
            else
            j++; //increment only if no deletion
        }
    }

    cout << "Unique array:\n";
    for (int i = 0; i < n; i++)
    cout << arr[i] << " ";

    return 0;
}
