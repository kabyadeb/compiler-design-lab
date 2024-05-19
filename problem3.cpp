/*
    problem 3:

    Write a program that abbreviates the following code:
    CSE-3141 as Computer Science & Engineering, 3rd Year, 1st Semester, Compiler Design, Theory.
*/

#include <bits/stdc++.h>
using namespace std;
// kabya 10 may 2024
string yr(char c)
{
    map<char, string> yrs = {{'1', "1std year"}, {'2', "2nd year"}, {'3', "3rd year"}, {'4', "4th year"}};
    return yrs[c];
}
string code(string cd)
{
    map<string, string> code = {{"CSE-3211", "Project Planning & Management"},
                                {"CSE-3221", "Digital Signal Processing"},
                                {"CSE-3222", "Digital Signal Processing Lab"},
                                {"CSE-3231", "Microprocessor and Assembly Language"},
                                {"CSE-3232", "Microprocessor and Assembly Language Lab"},
                                {"CSE-3241", "Operating Systems"},
                                {"CSE-3242", "Operating Systems Lab"},
                                {"CSE-3251", "Computer Networks"},
                                {"CSE-3252", "Computer Networks Lab"},
                                {"CSE-3111", "Software Engineering"},
                                {"CSE-3112", "Software Engineering Lab"},
                                {"CSE-3121", "Database Management Systems"},
                                {"CSE-3122", "Database Management Systems Lab"},
                                {"CSE-3131", "Web Engineering"},
                                {"CSE-3132", "Web Engineering Lab"},
                                {"CSE-3141", "Compiler Design"},
                                {"CSE-3142", "Compiler Design Lab"},
                                {"CSE-3151", "Engineering Ethics and Environment Protection"},
                                {"ICE-3161", "Communication Engineering"}};
    return code[cd];
}

int main()
{
    string s;
    cin >> s;
    vector<string> sk;
    // only for 3rd year .
    if (s[0] == 'C')
        cout << "Computer Science & engineering,";
    else if (s[0] == 'I')
        cout << "Information and communication engineering";
    char k = s[s.find("-") + 1];
    char l = s[s.find('-') + 2];
    // printing year,semester respectively
    cout << yr(k) << ",";
    if (l == '1')
        cout << "1std semester,";
    else
        cout << "2nd semester,";
    // course name
    cout << code(s);
}