#include <string>
#include <stack>
#include <iostream>
using namespace std;
int precidence(char c)
{
    if (c == '^')
        return 3;
    else if (c == '*' || c == '/')
        return 2;
    else if (c == '+' || c == '-')
        return 1;
    else
        return -1;
}
string postfix(string s)
{
    stack<char> st;
    string final;
    int l = s.size();
    st.push('N');
    for (int i = 0; i < l; i++)
    {
        if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z'))
        {
            final += s[i];
        }
        else if (s[i] == '(')
        {
            st.push(s[i]);
        }
        else if (s[i] == ')')
        {
            while (st.top() != 'N' && st.top() != '(')
            {
                char c = st.top();
                st.pop();
                final += c;
            }
            st.pop();
        }
        else
        {
            while (st.top() != 'N' && precidence(st.top()) >= precidence(s[i]))
            {
                char c = st.top();
                st.pop();
                final += c;
            }
            st.push(s[i]); // pushing the current operator.
        }
    }
    while (st.top() != 'N')
    {
        final += st.top();
        st.pop();
    }
    return final;
}

int main()
{
    string s;
    getline(cin, s);
    string ans = postfix(s);
    cout << ans << endl;
}