#include <iostream>
using namespace std;
#define MaxLen 100

int main()
{
    int top=0;
    char stack[MaxLen];
    char str[MaxLen];

    cout <<"Enter the word without space: ";
    cin >> str;

    for(int i=0; str[i]!='\0';i++) 
    {
        stack[top++]=str[i];
    }
    top--;

    cout <<"Reversed string: ";
    while(top!=-1) 
    {
        cout<<stack[top--];
    }
    return 0;
}
