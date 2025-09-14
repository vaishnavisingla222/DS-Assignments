#include<iostream>
using namespace std;
void sort(int arr[],int len)
{
    for(int i=0;i<len-1;i++)
    {
        bool check=false;
        for(int j=0;j<len-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                int temp=arr[j];
                arr[j]=arr[i+1];
                arr[i+1]=temp;
                check=true;
            }
        }
        if(check==false)
        return;
    }
    return;
}
int main()
{
    int arr[]={64,34,25,12,22,11,90};
    int len=sizeof(arr)/sizeof(arr[0]);
    sort(arr,len);

    cout<<("Sorted array is:")<<endl;
    for (int i=0;i<len;i++)
    cout<<arr[i]<<" ";

    return 0;
}