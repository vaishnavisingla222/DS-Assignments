#include<iostream>
using namespace std;
int main()
{
    int arr[]= {1,10};
    int len=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<len-1;i++)
    {
        if(arr[i+1]-arr[i]!=1)
        {
            int j=arr[i]+1;
            while(j<arr[i+1])
            {
                cout<<j<<" ";
                j++;
            }
        }
    }
}   