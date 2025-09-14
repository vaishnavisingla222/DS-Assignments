#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char str[100];
    cout<<"Enter the string: ";
    cin>>str;

    int k=0;
    for(int i=0;i<strlen(str);i++)
    {
        char ch=str[i];
        if(ch=='a' || ch=='e' || ch=='i' || ch=='o' ||ch=='u')
        continue;

        else
        str[k++]=ch;
    }
    str[k]='\0';
    cout<<str;
}