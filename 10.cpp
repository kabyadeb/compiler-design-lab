#include <bits/stdc++.h>
#include <iomanip>
#include <iostream>
#include <string>
using namespace std;
int n;
string rule_l[10], rule_r[10];

void ans(string sen)
{
    string stk, input;
    cout << setw(15) << "stack" << setw(15) << "input" << setw(15) << "action" << endl;
    stk.push_back('$');
    input = sen;
    input.push_back('$');
    while (input[0] != '$')
    {
        stk.push_back(input[0]);
        cout << setw(15) << stk << setw(15) << input << setw(15) << "Shifted by " << input[0] << endl;
        input.erase(input.begin());
        for (int i = 0; i < n; i++)
        {
            if (stk.find(rule_r[i]) < stk.size())
            {
                stk.erase(stk.begin() + 1, stk.end());
                stk = stk + rule_l[i];
                cout << setw(15) << stk << setw(15) << input << setw(15) << "Reduced by " << rule_l[i] << "->" << rule_r[i] << endl;
                break;
            }
        }
    }
    input.push_back('s'); // changable 
    if (input == stk)
        cout << "SUCCESS";
}
int main()
{
    string s, sentence;
    cout << "Take number of production rule : ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << "Take production rule : ";
        cin >> s;
        rule_l[i] = s[0];
        for (int j = 3; j < s.size(); j++)
        {
            rule_r[i] += s[j];
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << rule_l[i] << "->" << rule_r[i] << endl;
    }
    cout << "Take a input sentense: ";
    cin >> sentence;
    cout << endl;
    ans(sentence);
}
