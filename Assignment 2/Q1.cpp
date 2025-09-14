#include<iostream>
using namespace std;
int search(int arr[],int target,int st,int end)
{
    if(st>end)
    return -1;

    int mid=(st+end)/2;

    if(arr[mid]==target)
    return mid;

    else if(arr[mid]>target)
    return search(arr,target,st,mid-1);

    else
    return search(arr,target,mid+1,end);
}
int main()
{
    int size;
    cout<<"enter the size of the array: ";
    cin>>size;
    int arr[size];

    cout<<"Enter the ellements of the array\n";
    for(int i=0;i<size;i++)
    cin>>arr[i];

    int target;
    cout<<"Enter the ellement to be searched: ";
    cin>>target;     
    
    int idx=search(arr,target,0,size-1);
    cout<<"Ellement found at "<<idx<<" indx";
    return 0;
}
