#include<iostream>
using namespace std;
int size=5;
int f=-1,r=-1;
int arr[5];

bool isEmpty()
{
    if(f==-1)
    return true;

    else
    return false;
}
bool isFull()
{
    if(r==size-1)
    return true;

    else
    return false;
}
void enqueue(int x) 
{
    if (isFull()) 
    {
        cout<<"Queue is Full\n";
        return;
    }
    if (isEmpty()) 
    {
        f=r=0;
        arr[0]=x;
        return;
    }

    arr[++r]=x;
    cout<<"Inserted\n";
    return;
}
void dequeue()
{
    if(isEmpty())
    {
        cout<<"Queue is already empty\n";
        return;
    }
    f++;
    if(f>r)
    f=r=-1;

    cout<<"Removed\n";
}
void peek()
{
    if(isEmpty())
    {
        cout<<"Queue is empty\n";
        return;
    }
    cout<<"Top ellement: "<<arr[f]<<endl;
    return;
}
void display()
{
    if(isEmpty())
    {
        cout<<"Queue is empty\n";
        return;
    }
    for(int i=f;i<=r;i++)
    cout<<arr[i]<<" ";

    cout<<endl;
    return;
}
int main()
{
    int choice;
    cout<<"Menu:\n1.Eneque i.e to add new ellement\n2.Dequeue i.e to remove the top most ellement\n3.Check queue is empty or not\n4.Check weather queue is full\n5.Dispaly the queue\n6.Peek i.e to find the first in ellement\n";

    do
    {
        cout<<"Enter the choice according to the menu: ";
        cin>>choice;
        switch(choice) 
        {
            case 1:
            int val; 
            cout<<"Enter value:"; 
            cin>>val; 
            enqueue(val); 
            break;

            case 2: 
            dequeue(); 
            break;

            case 3: 
            if(isEmpty()) 
            cout<<"Queue is empty\n";

            else
            cout<<"Queue is not empty\n";
            break;

            case 4: 
            if(isFull())
            cout<<"Queue is full\n";

            else
            cout<<"Queue is  not full\n";
            break;

            case 5: 
            display(); 
            break;

            case 6:
            peek(); 
            break;

            default:
            cout<<"Exiting...\n";
        }
    }
    while(choice<7);

    return 0;
}
