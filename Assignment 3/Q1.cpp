#include <iostream>
using namespace std;

#define MAX 1000 
int top = -1;

void push(int num, int arr[]) 
{
    if (top == MAX - 1)
    cout << "Stack is full" << num << endl;
        
    else
    {
        top++;
        arr[top] = num;
        cout << num << " pushed into stack." << endl;
    }
}

void pop(int arr[]) 
{
    if (top == -1)
    cout << "Stack is empty" << endl;

    else 
    {
        cout << arr[top] << " popped from stack." << endl;
        top--;
    }
}

void isEmpty(int arr[]) 
{
    if (top == -1)
    cout << "Stack is Empty." << endl;

    else
    cout << "Stack is NOT Empty." << endl;
}

void isFull(int arr[]) 
{
    if (top == MAX - 1)
    cout << "Stack is Full." << endl;

    else
    cout << "Stack is NOT Full." << endl;
}

void display(int arr[]) 
{
    if (top == -1)
    cout << "Stack is Empty." << endl; 

    else 
    {
        cout << "Stack elements are: ";

        for (int i = top; i >= 0; i--)
        cout << arr[i] << " ";

        cout << endl;
    }
}

void peek(int arr[]) 
{
    if (top == -1)
    cout << "Stack is Empty." << endl;
    
    else
    cout << "Top element is: " << arr[top] << endl;
}

int main() 
{
    int choice;
    int arr[MAX];

    cout << "Menu driven program\n";
    cout << "1. Push\n2. Pop\n3. isEmpty\n4. isFull\n5. Display\n6. Peek\n7. Exit\n";

    do 
    {
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) 
        {
            case 1: 
            {
                int num;
                cout << "Enter the number to be added: ";
                cin >> num;
                push(num, arr);
                break;
            }
            case 2:
                pop(arr);
                break;
            case 3:
                isEmpty(arr);
                break;
            case 4:
                isFull(arr);
                break;
            case 5:
                display(arr);
                break;
            case 6:
                peek(arr);
                break;
            case 7:
                cout << "Exiting program..." << endl;
                break;
            default:
                cout << "Invalid choice" << endl;
        }
    } while (choice != 7);

    return 0;
}
