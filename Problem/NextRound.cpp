#include <iostream>
using namespace std;
int main()
{
    int n, k;
    cin >> n >> k;
    int a[n];
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int check = a[k - 1];
    for (int i = 0; i < n; i++)
    {
        if (a[i] >= check && (check != 0 || a[i] != 0))
        {
            count++;
        }
        else if (a[i] < check)
        {
            break;
        }
    }
    cout << count << endl;
}