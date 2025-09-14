#include<iostream>
using namespace std;

int size=5;
int f=-1, r=-1;
int arr[5];

bool isEmpty()
{
    return(f==-1);
}
bool isFull()
{
    return((r+1)%size==f);
}
void enqueue(int x) 
{
    if(isFull()) 
    {
        cout<<"Queue is Full\n";
        return;
    }
    if(isEmpty()) 
    {
        f=r=0;
        arr[r]=x;
    }
    else
    {
        r=(r + 1)%size;
        arr[r]=x;
    }
    cout <<"Inserted\n";
}
void dequeue()
{
    if(isEmpty())
    {
        cout << "Queue is already empty\n";
        return;
    }
    if(f==r)
    f=r=-1;

    else
    f=(f+1)%size;

    cout <<"Removed\n";
}
void peek()
{
    if(isEmpty())
    {
        cout<<"Queue is empty\n";
        return;
    }
    cout<<"Top element: "<<arr[f]<<endl;
}

void display()
{
    if (isEmpty())
    {
        cout<<"Queue is empty\n";
        return;
    }
    cout<<"Queue elements: ";
    int i=f;
    while(true)
    {
        cout<<arr[i]<<" ";
        if (i==r) 
        break;

        i=(i + 1)%size;
    }
    cout<<endl;
}

int main()
{
    int choice;
    cout << "Menu:\n1.Enqueue\n2.Dequeue\n3.Check queue is empty or not\n4.Check whether queue is full\n5.Display the queue\n6.Peek\n";
    do
    {
        cout<<"Enter the choice according to the menu: ";
        cin>>choice;
        switch(choice) 
        {
            case 1:
            {
                int val; 
                cout <<"Enter value: "; 
                cin>>val; 
                enqueue(val); 
                break;
            }
            case 2: 
            dequeue(); 
            break;

            case 3: 
            if (isEmpty()) 
            cout << "Queue is empty\n";

            else
            cout << "Queue is not empty\n";
            break;

            case 4: 
            if (isFull())
            cout << "Queue is full\n";

            else
            cout << "Queue is not full\n";

            break;

            case 5: 
            display(); 
            break;

            case 6:
            peek(); 
            break;

            default:
            cout << "Exiting...\n";
        }
    }
    while(choice<7);
    return 0;
}
