#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char str[100];
    cout<<"Enter the string: ";
    cin>>str;
    int n=strlen(str);

    for(int i=0,j=n-1;i<=j;i++,j--)
    {
        char ch=str[i];
        str[i]=str[j];
        str[j]=ch;
    }
    cout<<"The reversed string: "<<str;
}