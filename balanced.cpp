#include <iostream>
#include <stack>
using namespace std;
bool isvalid(string str)
{
    stack<char> st;
    for (int i = 0; i < str.size(); i++)
    {
        char ch = str[i];
        if (ch == '[' || ch == '{' || ch == '(')
        {
            st.push(ch);
        }
        else
        {
            if (ch == ']' && !st.empty() && st.top() == '[')
            {
                st.pop();
            }
            else if (ch == '}' && !st.empty() && st.top() == '{')
            {
                st.pop();
            }
            else if (ch == ')' && !st.empty() && st.top() == '(')
            {
                st.pop();
            }
            else
            {
                return false;
            }
        }
    }
    return st.empty();
}
int main()
{
    string str = "([]{})";
    cout << isvalid(str);
    return 0;
}

// time and space complexity --->O(n)
