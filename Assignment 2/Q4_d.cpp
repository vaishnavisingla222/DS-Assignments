#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char str[100];
    cout<<"Enter the string: ";
    cin>>str;
    int n=strlen(str);
    for(int i=0;i<n-1;i++)
    {
        for (int j = 0; j < n - i - 1; j++) 
        {
            if (str[j] > str[j + 1]) 
            {
                char temp = str[j];
                str[j] = str[j + 1];
                str[j + 1] = temp;
            }
        }
    }
    cout << "Alphabetical order: " << str << endl;
    return 0;
}