#include<iostream>
using namespace std;
char check(string str)
{
    int freq[26]={0};
    for(int i=0;i<str.length();i++)
    freq[(str[i]-'a')]++;

    for(int i=0;i<str.length();i++)
    {
        if(freq[str[i]-'a']==1)
        return str[i];
    }
    return '\0';
}
int main()
{
    string str;
    cout<<"Enter the string(small characters and no digit): ";
    cin>>str;
    char ans = check(str);
    if (ans=='\0')
    cout <<"No non-repeating character found\n";

    else
    cout <<"First non-repeating character: "<<ans<<endl;

    return 0;
}
