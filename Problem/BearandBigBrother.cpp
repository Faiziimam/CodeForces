#include <bits/stdc++.h>
using namespace std;
int main()
{
    //a=weight of Limak
    //b=weight of Bob
    int a, b;
    cin >> a >> b;
    int count = 0;
    int i = 1;

    while (i < 6)
    {
        a = a * 3;
        b = b * 2;
        if (a > b)
        {
            break;
        }
        i++;
    }

    cout << i << endl;
    return 0;
}