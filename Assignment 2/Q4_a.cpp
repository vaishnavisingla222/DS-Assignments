#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char str1[100];
    char str2[100];
    char res[200];
    int k=0;
    cout<<"Enter the first string: ";
    cin>>str1;
    cout<<"Enter the second string: ";
    cin>>str2;
    for(int i=0;i<strlen(str1);i++)
    res[k++]=str1[i];

    for(int i=0;i<strlen(str2);i++)
    res[k++]=str2[i];

    res[k]='\0';
    cout<<"The concated string: "<<res;
}