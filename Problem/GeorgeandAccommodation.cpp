#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    int p, q;
    cin >> t;
    int count = 0;
    while (t--)
    {
        cin >> p >> q;
        int diff = q-p;
        if (diff >= 2)
        {
            count++;
        }
        
    }
    cout << count << endl;

    return 0;
}