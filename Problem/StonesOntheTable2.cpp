#include <iostream>
using namespace std;
int main()
{
    int n, count = 0;
    string s;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin>>s;
        if (s[i] == s[i + 1])
        {
            count++;
        }
    }
    cout << count << endl;
    return 0;
}
