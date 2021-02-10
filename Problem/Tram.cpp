#include <bits/stdc++.h>
using namespace std;
int main()
{
    // n->Number of tram stops
    // a->Number of passenger exit the tram
    // b->Number of passenger enter the tram
    int n, a, b;
    cin >> n;
    int capacity = 0;
    int maxNum = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        cin >> a >> b;

        capacity = (capacity - a) + b;

        maxNum = fmax(maxNum, capacity);
    }
    cout << maxNum << endl;

    return 0;
}