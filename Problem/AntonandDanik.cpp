#include <bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    string s;
    cin >> n >> s;
    int a = 0;
    int b = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'A')
        {
            a++;
        }
        else
        {
            b++;
        }
    }

    if (a == b)
    {
        cout << "Friendship" << endl;
    }
    else if (a > b)
    {
        cout << "Anton" << endl;
    }
    else
    {
        cout << "Danik" << endl;
    }

    return 0;
}