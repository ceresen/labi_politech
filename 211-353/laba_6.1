#include <iostream>
#include <stack>
#include <string>

using namespace std;

inline bool LeftBracket(char c)
{
    return ('(' == c  '{' == c  '[' == c);
}

inline bool Fit(char lb, char rb)
{
    return ('(' == lb && ')' == rb)  ('[' == lb && ']' == rb)  ('{' == lb && '}' == rb);
}

inline bool st(char c)
{
    if (c == ')'  c == '}'  c == ']') 
    {
        return false;
    }
}

int main()
{
    string s;
    cin >> s;
    stack<char> stack;
    int c = 0;
    if (s != "")
    {
        for (string::const_iterator it(s.begin()), itEnd(s.end()); it != itEnd; ++it)
        {
            if (LeftBracket(*it))
            {
                stack.push(*it);
            }
            else if (stack.empty() && st(*it) == false) {
                cout << "NO" << endl;
                c = 1;
                break;
            }
            else if (Fit(stack.top(), *it))
            {
                stack.pop();
            }
            else
            {
                stack.push(*it);
                break;
            }
        }
        if (c == 0) {
            cout << (stack.empty() ? "YES" : "NO") << endl;
        }
    }
    return 0;
}
