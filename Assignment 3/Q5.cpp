#include <iostream>
#include <stack>
#include <cctype>
#include <cmath>
using namespace std;
int evaluate(string postfix) 
{
    stack<int> st;
    for (int i=0;i<postfix.length();i++) 
    {
        char c=postfix[i];
        if (isdigit(c))
        st.push(c - '0');
          
        else 
        {
            int v2 = st.top(); 
            st.pop();
            int v1 = st.top(); 
            st.pop();

            switch (c) 
            {
                case '+': 
                st.push(v1+v2); 
                break;

                case '-': 
                st.push(v1-v2); 
                break;

                case '*': 
                st.push(v1*v2); 
                break;

                case '/': 
                if (v2==0)
                {
                    cout <<"Error: Division by zero!" << endl;
                    return -1;
                }
                st.push(v1/v2); 
                break;

                default:
                cout << "Error: Unknown operator " << c << endl;
                return -1;
            }
        }
    }
    return st.top();
}
int main() 
{
    string postfix;
    cout << "Enter a postfix expression: ";
    cin >> postfix;
    int result = evaluate(postfix);
    cout << "Answer="<<result<<endl;
    return 0;
}
