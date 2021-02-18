#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    int h, n;
    cin >> t >> h;
    int bent = 0;
    while (t--)
    {
        cin >> n;
        if (n <= h)
        {
            bent++;
        }
        else if (n > h)
        {
            n /= 2;
            bent += 2;
        }
    }
    cout << bent;
    return 0;
}