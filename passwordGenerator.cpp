#include <bits/stdc++.h>
using namespace std;

void passwordGenerator()
{
    srand(time(0));
    string pass;
    string data = "abcdefghijklmnopqrstpwuvxyz"
                  "ABCDEFGHIJKLMNOPQRSTWUVXYZ"
                  "0123456789"
                  "@#$%^&*()?/{}[]|`!";

    for (int i = 0; i < 12; i++)
    {
        pass = pass + data[rand() % 81];
    }
    cout << " Your new password is : " << pass << endl;
    cout << endl;
}

int main()
{
    char c;

    while (1)
    {
        cout << "Do you want to generate new password ?" << endl;
        cout << "[Y/N] ?" << endl;
        cin >> c;
        if (c == 'Y')
        {
            passwordGenerator();
        }
        else
        {
            cout << " Until next time be safe see yaa!! " << endl;
            cout << endl;
        }
    }

    return 0;
};