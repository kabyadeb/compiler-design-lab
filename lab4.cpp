#include <iostream>
#include <string>
using namespace std;
void solve()
{

    string input;

    if (!freopen("/home/mylove/cpp code/text.txt", "r", stdin))
    {
        cout << "Error: Unable to open file." << endl;
        return;
    }
    while (getline(cin, input))
    {
        cout << "Input line is :" << input << '\n';
        if (((input[0] >= 'i' && input[0] <= 'n') || (input[0] >= 'I' && input[0] <= 'N')))
        {
            for (int i = 1; i < (int)input.size(); i++)
            {
                if ((input[i] >= 'a' && input[i] <= 'z') || (input[i] >= 'A' && input[i] <= 'Z') || isspace(input[i]) || (input[i] >= '0' && input[i] <= '9'))
                    continue;
                else
                {
                    cout << "INvalid input\n";
                    break;
                }
            }
            cout << "Integer Variable\n";
        }
        else if (input[0] >= '0' && input[0] <= '9')
        {
            if (input.size() < 5)
            {
                cout << "ShortInt Number\n";
            }
            else if (input.size() > 4)
            {
                cout << "LongInt Number\n";
            }
            else
                cout << "INvalid input\n";
        }
    }
}
int main()
{
    solve();
}
