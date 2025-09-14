#include<iostream>
using namespace std;
int main()
{
    int len;
    cout<<"enter the size of the array: ";
    cin>>len;
    int arr[len];

    cout<<"Enter the ellements of the array\n";
    for(int i=0;i<len;i++)
    cin>>arr[i];

    cout<<"The inversion pairs are:\n";
    for(int i=0;i<len;i++)
    {
        for (int j=0;j<len;j++)
        {
            if(i<j && arr[i]>arr[j])
            cout<<i<<","<<j<<endl;
        }
    }
    return 0;
}