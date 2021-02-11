#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int maxx = 1e5 + 10;
int a[15];
char s[maxx];
int main()
{
    int n;
    cin >> n >> s;
    int l = 0, r = 9;

    for (int i = 0; i < n; i++)
    {

        if (s[i] == 'L')
        {
            while (a[l])
                l++;
            a[l] = 1;
        }
        else if (s[i] == 'R')
        {
            while (a[r])
                r--;
            a[r] = 1;
        }
        else
        {
            int x = s[i] - '0';
            a[x] = 0;
            l = min(l, x);
            r = max(r, x);
        }
    }
    for (int i = 0; i <=9; i++)
    {
        cout << a[i];
    }

    return 0;
}