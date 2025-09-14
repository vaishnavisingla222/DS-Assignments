#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char str[100];
    cout<<"Enter the string: ";
    cin>>str;
    int n=strlen(str);
    for(int i=0;i<n;i++)
    {
        char ch=str[i];
        if(64<ch && ch<91)
        str[i]+=32;

        else if(96<ch && ch<123)
        str[i]-=32;
    }
    cout << "New string: " << str << endl;
    return 0;
}