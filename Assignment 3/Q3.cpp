#include <iostream>
#include <stack>
#include <string>
using namespace std;

void isBalanced(string s) 
{
    stack<char> st;
    for (int i = 0; i < s.length(); i++) 
    {
        char ch = s[i]; 
        
        if (ch == '(')
        st.push(ch);

        else if (ch == ')') 
        {
            if (st.empty())
            cout<<"Invalid Parethesis\n";

            st.pop();
        }
    }
    if(st.empty())
    cout<<"Valid Parenthesis\n";

    else
    cout<<"Invalid Parethesis\n";
}

int main() 
{
    string str;
    cout << "Enter an expression: ";
    getline(cin, str);
    isBalanced(str);
    return 0;
}
