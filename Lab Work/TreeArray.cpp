#include<iostream>
#include<climits>
#include<cmath>
using namespace std;
int size=0;
int maxind=-1;
int arr[1000];
bool isEmpty()
{
    return(size==0);
}
bool isFull()
{
    return (size==1000);
}
void insert(int val,int pos)
{
    if(isFull())
    {
        cout<<"Tree is full no more insertion\n";
        return;
    }
    arr[pos]=val;
    if(maxind<pos)
    maxind=pos;
    return;
}
void print(int arr[])
{
    if(isEmpty())
    {
        cout<<"Tree is Empty\n";
        return;
    }
    for(int i=0;i<=maxind;i++)
    cout<<arr[i]<<" ";

    return;
}
void preorder(int arr[],int pos)
{
    if(isEmpty() || pos>size)
    {
        return;
    }
    cout<<arr[pos]<<" ";
    preorder(arr,2*pos+1);
    preorder(arr,2*pos+2);
}
void inorder(int arr[],int pos)
{
    if(isEmpty() || pos>size)
    {
        return;
    }
    inorder(arr,2*pos+1);
    cout<<arr[pos]<<" ";
    inorder(arr,2*pos+2);
}
void postorder(int arr[],int pos)
{
    if(isEmpty() || pos>size)
    {
        return;
    }
    postorder(arr,2*pos+1);
    postorder(arr,2*pos+2);
    cout<<arr[pos]<<" ";
}
int main()
{ 
    for(int i=0;i<1000;i++)
    arr[i]=-1;

    cout<<"Enter the number of nodes: ";
    cin>>size;
    cout<<"Enter node values level-wise(-1 for no node):\n";
    int i=0;
    while(i<size) 
    {
        int val;
        cin>>val;
        if (val!=-1)
        insert(val,i);

        i++;
    }

    cout<<"Preorder: ";
    preorder(arr,0);
    cout<<endl;
    cout<<"Inorder: ";
    inorder(arr,0);
    cout<<endl;
    cout<<"Postorder: ";
    postorder(arr,0);
    cout<<endl;
}
